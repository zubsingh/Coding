class Solution
{
    static void addLeftView(Node root,HashSet<Node> hs,ArrayList<Integer> al){
        if(root == null) return;
        if(root.left != null){
            hs.add(root);
            al.add(root.data);
            addLeftView(root.left,hs,al);
        }
        else if(root.right != null){
            hs.add(root);
             al.add(root.data);
            addLeftView(root.right,hs,al);
        }
    }
    
    static void addLeaves(Node root,HashSet<Node> hs,ArrayList<Integer> al){
        if(root == null) return;
        if(root.left == null && root.right == null && !hs.contains(root)){
            al.add(root.data);
            hs.add(root);
        }
        addLeaves(root.left,hs,al);
        addLeaves(root.right,hs,al);
    }
    
    static void addRightView(Node root,HashSet<Node> hs,ArrayList<Integer> al){
        if(root == null) return;
        if(root.right != null){
            addRightView(root.right,hs,al);
            hs.add(root);
            al.add(root.data);
        }
        else if(root.left != null){
            addRightView(root.left,hs,al);
            hs.add(root);
            al.add(root.data);
        }
    }
    
	ArrayList <Integer> printBoundary(Node node)
	{
	    ArrayList<Integer> al = new ArrayList<Integer>();
	    HashSet<Node> hs = new HashSet<Node>();
	    al.add(node.data);
	    addLeftView(node.left,hs,al);
	    addLeaves(node.left,hs,al);
	    addLeaves(node.right,hs,al);
	    addRightView(node.right,hs,al);
	    return al;
	}
}
