class Tree {
    static boolean istree = false;
    static boolean subtree(Node T,Node S){
        if(T == null && S == null) return true;
        if(T == null || S == null) return false;
        if(T.data == S.data && subtree(T.left,S.left) && subtree(T.right,S.right)){
            return true;
        }
        return false;
    }
    static void isSub(Node T,Node S){
        if(T == null || S == null) return;
        if(subtree(T,S)){
            //System.out.println(T.data);
            istree = true;
            return;
        }
        isSub(T.left,S);
        isSub(T.right,S);
    } 
    public static boolean isSubtree(Node T, Node S) {
        // bol = false;
        isSub(T,S);
        if(istree == true){
            istree = false;
            return true;
        }
        return false;
    }
}
