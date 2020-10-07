class Tree {
    static int height(Node root){
        if(root == null) return 0;
        return 1+Math.max(height(root.left),height(root.right));
    }
    /* Complete the function to get diameter of a binary tree */
    int diameter(Node root) {
        // Your code here
        if(root == null) return 0;
        
        int lheight = height(root.left);
        int rheight = height(root.right);
        
        int leftdiameter = diameter(root.left);
        int rightdiameter = diameter(root.right);
        
        return Math.max(1+lheight+rheight,Math.max(leftdiameter,rightdiameter));
    }
}
