class GfG
{
    static void inOrder(Node root,ArrayList<Node> al){
        if(root == null) return;
        inOrder(root.left,al);
        al.add(root);
        inOrder(root.right,al);
    }
    Node bToDLL(Node root)
    {
	    ArrayList<Node> al = new ArrayList<Node>();
	    inOrder(root,al);
	    Node temp = null;
	    Node prev = null;
	    Node out = null;
	    //System.out.println(al.size());
	    for(int i=0;i<al.size();i++){
	        temp = al.get(i);
	        if(prev == null){
	            prev = temp;
	            out = prev;
	        }
	        else{
	            prev.right = temp;
	            temp.left = prev;
	            prev=temp;
	        }
	    }
	    prev.right = null;
	    return out;
    }
}
