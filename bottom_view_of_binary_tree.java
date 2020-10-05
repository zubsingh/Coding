class Tree
{
    static void bottonViewUtil(Node root,ArrayList<Integer> al){
        Queue<Node> q = new LinkedList<Node>();
        TreeMap<Integer,Integer> hm = new TreeMap<Integer,Integer>();
        
        int hd = 0;
        root.hd = hd;
        q.add(root);
        hm.put(hd,root.data);
        
        
        while(!q.isEmpty()){
            
            Node temp = q.remove();
            hd = temp.hd;
            hm.put(hd,temp.data); 
            if(temp.left != null){
                q.add(temp.left);
                temp.left.hd = hd-1;
                
            }
            
            if(temp.right != null){
                q.add(temp.right);
                temp.right.hd = hd+1;
                
            }
        }
      
        for (Map.Entry mapElement : hm.entrySet()) { 
    
            int value = ((int)mapElement.getValue()); 
            al.add(value);
        } 
    }
