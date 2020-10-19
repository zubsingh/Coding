class Tree
{
    
    public static int getSizeUtil(Node root){
         if(root == null) return 0;
        int x = (root.left != null) ? 1 : 0;
        int y = (root.right != null) ? 1: 0;
        return x + y + getSizeUtil(root.left) + getSizeUtil(root.right);
    }
	public static int getSize(Node root)
	{
	    if(root == null){
	        return 0;
	    }
	    return 1 + getSizeUtil(root);
       
    }
}
