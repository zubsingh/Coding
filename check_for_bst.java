//User function Template for Java

/*
Structure of Node:
class Node{
    int data;
    Node left;
    Node right;
    Node(int data){
        this.data = data;
        left=null;
        right=null;
    }
}
*/

public class Tree
{
    boolean Bstright(Node root,int value){
        if(root == null) return true;
        if(root.data > value && Bstright(root.left,value) && Bstright(root.right,value)){
            return true;
        }
        return false;
    }
    
    boolean Bstleft(Node root,int value){
        if(root == null) return true;
        
        if(root.data < value && Bstleft(root.left,value) && Bstleft(root.right,value)){
            return true;
        }
        return false;
    }
    boolean BstUtil(Node root){
        if(root == null){
            return true;
        }
        if(Bstleft(root.left,root.data) && Bstright(root.right,root.data) && BstUtil(root.left) && BstUtil(root.right)){
            return true;
        }
        return false;
    }
    static boolean Bst(Node root,int min,int max){
        if(root == null) return true;
        if(root.data <= min || root.data > max){
            return false;
        }
        
        if(Bst(root.left,min,root.data) && Bst(root.right,root.data,max)){
            return true;
        }
        return false;
    }
    // return true if the given tree is a BST, else return false
    boolean isBST(Node root)
        {
            // 1st method
            // if(BstUtil(root)){
            //     return true;
            // }
            // 2nd method
            if(Bst(root,Integer.MIN_VALUE,Integer.MAX_VALUE)){
                return true;
            }
            return false;
        }
}
