class View
{
   static class NodewithIndex{
    Node node;
    int hq;
    NodewithIndex(int hq,Node temp){
        this.hq = hq;
        this.node = temp;
    }
    Node getNode(){
        return node;
    }
    int getIndex(){
        return hq;
    }
}

    static boolean topViewUtil(Node root){
        TreeMap<Integer,Node> hm = new TreeMap<Integer,Node>();
        if(root == null) return false;
        int hq = 0;
        hm.put(hq,root);
        Queue<NodewithIndex> q = new LinkedList<NodewithIndex>();
        q.add(new NodewithIndex(hq,root));
        
            while(!q.isEmpty()){
             NodewithIndex tmpNode = q.poll(); 
            if (!hm.containsKey(tmpNode.hq)) { 
                hm.put(tmpNode.hq, tmpNode.node); 
            } 
            
            if(tmpNode.node.left != null){
                 q.add(new NodewithIndex(tmpNode.hq-1,tmpNode.node.left));
            }
            if(tmpNode.node.right != null){
                q.add(new NodewithIndex(tmpNode.hq+1,tmpNode.node.right));
            }
         }
       
        Set<Map.Entry<Integer, Node>> entries = hm.entrySet();
        for(Map.Entry<Integer, Node> entry : entries){
            System.out.print(entry.getValue().data+" ");
        }   
        return true;
    }
    
    static void topView(Node root)
    {
        if(!topViewUtil(root)){
            return;
        }
        
    }
}
