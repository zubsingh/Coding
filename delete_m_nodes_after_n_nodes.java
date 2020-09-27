/*
delete n nodes after m nodes
The input list will have at least one element  
Node is defined as
  class Node
  {
      int data;
      Node next;
      Node(int data)
      {
          this.data = data;
          this.next = null;
      }
  }
*/

class Solution
{
    static void linkdelete(Node head, int M, int N)
    {
        Node temp = head;
        int x = 1;
        int y = 1;
        Node prev = head;
        while(temp != null){
            
            while(temp != null && x <= M){
                prev = temp;
                temp = temp.next;
                x++;
            }
            if(x <= M){
                break;
            }
            
            while(temp != null && y <= N){
                temp = temp.next;
                y++;
            }
            
            if(y <= N){
                prev.next = null;
                break;
            }
            prev.next = temp;
            temp = prev.next;
            x = 1;
            y = 1;
            }
            
    
    }
}

