class Tree
{
    /*
    Node class is Defined as follows:
    class Node{
        int data;
        Node left;
        Node right;
        Node nextRight;
        Node(int data){
            this.data = data;
            left=null;
            right=null;
            nextRight = null;
        }
    }
    */
    public static void connect(Node p)
        {
            Queue<Node> q = new LinkedList<Node>();
            q.add(p);
            
            while(!q.isEmpty()){
                Node prev = null;
                int n = q.size();
                Node temp = null;
                for(int i=0;i<n;i++){
                    temp = q.poll();
                    if(prev == null){
                        prev = temp;
                    }
                    else
                    {
                        prev.nextRight = temp;
                        prev = temp;
                    }
                    
                    if(temp.left != null){
                        q.add(temp.left);
                    }
                    if(temp.right != null){
                        q.add(temp.right);
                    }
                }
                
                temp.nextRight = null;
            }
        }
}
