class Tree
{
    static int sum(Node root){
        if(root == null) return 0;
        return sum(root.left) + root.data + sum(root.right);
    }
	boolean isSumTree(Node root)
	{
        if(root == null || root.left == null && root.right == null) return true;
        int left = sum(root.left);
        int right = sum(root.right);
        
        if(root.data == left + right && isSumTree(root.left) && isSumTree(root.right)){
            return true;
        }
        return false;
	}
}
