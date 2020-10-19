class Tree
{
    // /* Function to get the maximum width of a binary tree*/
    int getMaxWidth(Node root)
    {
        if(root == null) return 0;
        Queue<Node> q = new LinkedList<Node>();
        int max_size = 1;
        q.add(root);
        while(!q.isEmpty()){
            int size = q.size();
            if(size > max_size)
                max_size = size;
            for(int i=0;i<size;i++){
                Node temp = q.remove();
                if(temp.left != null){
                    q.add(temp.left);
                }
                if(temp.right != null){
                    q.add(temp.right);
                }
            }
        }
        return max_size;
    }		
}
