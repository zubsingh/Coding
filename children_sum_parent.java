class Tree
{
    // Return 1 if all the nodes in the tree satisfy the given property. Else return 0
    public static int isSumProperty(Node root)
    {
        if(root == null || root.left == null && root.right == null) return 1;
        
        int x = 0;
        if(root.left != null)
        x=root.left.data;
        
        int y =0;
        if(root.right != null)
        y=root.right.data;
        
        if(root.data == x+y && isSumProperty(root.left) == 1 && isSumProperty(root.right) == 1){
            return 1;
        }
        
        return 0;
    }
}
