class Tree
{
    void siblingCheck(Node root,Node parent,ArrayList<Integer> al){
        if(root == null) return;
        if(parent != null && parent.right == null && parent.left == root){
            al.add(root.data);
        }
        if(parent != null && parent.left == null && parent.right == root){
            al.add(root.data);
        }
        if(root.left != null)
        siblingCheck(root.left,root,al);
        if(root.right != null)
        siblingCheck(root.right,root,al);
    }
    ArrayList<Integer> noSibling(Node node)
    {
        ArrayList<Integer> al = new ArrayList<Integer>();
        siblingCheck(node,null,al);
        Collections.sort(al);
        if(al.size() == 0){
            al.add(-1);
        }
        return al;
    }
