
class GfG
{
    
    static int sum = 0;
    static void SumofLeafNodesUtil(Node root){
        if(root == null) return;
        if(root.left == null && root.right == null){
            sum += root.data;
        }
        SumofLeafNodesUtil(root.left);
        SumofLeafNodesUtil(root.right);
    }
    public int SumofLeafNodes(Node root)
    {
        if(root == null) return 0;
        SumofLeafNodesUtil(root);
        int s = sum;
        sum = 0;
        return s;
    }
}
