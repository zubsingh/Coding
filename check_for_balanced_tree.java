class Tree
{
    static int height(Node root){
        if(root == null) return 0;
        
        return 1 + Math.max(height(root.left),height(root.right));
    }
    
     /* This function should return tree if passed  tree 
     is balanced, else false. */
    boolean isBalanced(Node root)
    {
	    if(root == null) return true;
	    int lheight = height(root.left);
	    int rheight = height(root.right);
	    
	    if(Math.abs(lheight - rheight) <= 1 && isBalanced(root.left) && isBalanced(root.right)){
	        return true;
	    }
	    return false;
    }
}
