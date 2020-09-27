/* Intersection of two sorted Linked lists

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

Node* findIntersection(Node* head1, Node* head2)
{
    Node *temp1 = head1;
    Node *temp2 = head2;
    Node *out = NULL;
    Node *returnout = NULL;
    while(temp1 != NULL && temp2 != NULL){
        if(temp1->data == temp2->data){
            if(out ==NULL){
                out = temp1;
                returnout =  out;
                
            }else{
                out->next = temp1;
                out = temp1;
            }
            temp1 =temp1->next;
            temp2 = temp2->next;
        }
        else if(temp1->data > temp2->data){
            temp2 = temp2->next;
        }
        else
            temp1 = temp1->next;
    }
    
    return returnout;
}
