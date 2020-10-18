class Tree{
    static int toSumTreeUtil(Node root){
        if(root==null) return 0;
        int ss = root.data;
        root.data = toSumTreeUtil(root.left)+toSumTreeUtil(root.right);
        return root.data + ss;
    }
    static void toSum2ndMethod(Node root){
        if(root == null) return;
        root.data = ((root.left != null) ? root.left.data : 0) +  ((root.right != null) ? root.right.data : 0);
        toSum2ndMethod(root.left);
        toSum2ndMethod(root.right);
        root.data += ((root.left != null) ? root.left.data : 0) +  ((root.right != null) ? root.right.data : 0);
    }
    public void toSumTree(Node root){
        //toSumTreeUtil(root);
        toSum2ndMethod(root);
    }
