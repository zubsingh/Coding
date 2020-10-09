class Level_Order_Traverse
{
    static ArrayList<ArrayList<Integer>> Lot(Node root,ArrayList<ArrayList<Integer>> al){
        ArrayList<Integer> first = new ArrayList<Integer>();
        Queue<Node> q = new LinkedList<Node>();
        q.add(root);
        first.add(root.data);
        al.add(first);
        while(!q.isEmpty())
        {
           int n = q.size();
           ArrayList<Integer> levelInsert = new ArrayList<Integer>();
           for(int i=0;i<n;i++){
                Node temp = q.remove();
           
            if(temp.left != null){
                q.add(temp.left);
                levelInsert.add(temp.left.data);
            }
            if(temp.right != null){
                q.add(temp.right);
                levelInsert.add(temp.right.data);
            }
            
           }
            if(q.isEmpty()){
               break;
           }
           al.add(levelInsert);
          
        }
        
        return al;
    }
    static ArrayList<ArrayList<Integer>> levelOrder(Node node) 
    {
       ArrayList<ArrayList<Integer>> l = new ArrayList<ArrayList<Integer>>();
       return Lot(node,l);
    }
}
