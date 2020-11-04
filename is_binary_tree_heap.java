class GfG
{
    
    /*You are required to complete this method */
    boolean isHeap(Node tree)
    {
	   if(tree == null) return true;
	   if(tree.left == null && tree.right == null) return true;
	   if(tree.left != null && tree.right != null && tree.data >= tree.left.data && tree.data >= tree.right.data && isHeap(tree.left) && isHeap(tree.right)){
	       return true;
	   }
	   if(tree.left != null && tree.right == null && tree.data >= tree.left.data && isHeap(tree.left) && isHeap(tree.left)){
	       return true;
	   }
	    if(tree.left == null && tree.right != null && tree.data >= tree.left.data && isHeap(tree.left) && isHeap(tree.right)){
	       return true;
	   }
	   return false;
    }
}
