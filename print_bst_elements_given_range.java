class Solution
{   
    static void printNearNodesUtil(Node root,int low,int high,ArrayList<Integer> al){
        if(root == null) return;
        if(low < root.data){
            printNearNodesUtil(root.left,low,high,al);
        }
        
        if(low <= root.data && root.data <= high){
            al.add(root.data);
        }
        
        if(high > root.data){
            printNearNodesUtil(root.right,low,high,al);
        }
    }
	public static ArrayList<Integer> printNearNodes(Node root, int low, int high)
	{
        ArrayList<Integer> al = new ArrayList<Integer>();
        printNearNodesUtil(root,low,high,al);
        return al;
    }
    
}
