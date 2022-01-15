/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
        void print(ListNode *head){
                ListNode* temp = head;
                while(temp != NULL){
                        std::cout << temp->val << " ";
                        temp = temp->next;
                }
                std::cout << "\n";
        }
        ListNode* reverse(ListNode *head){
                ListNode *curr = head;
                ListNode *prev = NULL;
                ListNode *next = NULL;
                
                while(curr != NULL){
                        next = curr->next;
                        curr->next = prev;
                        prev = curr;
                        curr = next;
                }
                
                return prev;
        }
        
    void reorderList(ListNode* head) {
        
            ListNode *slow = head;
            ListNode *fast = head;
            ListNode *prev = NULL;
            while(fast != NULL && fast->next != NULL){
                    prev = slow;
                    slow = slow->next;
                    fast = fast->next->next;
            }
            if(prev == NULL) return;
            prev->next = NULL;
            ListNode *last = reverse(slow);
            //print(head);
             //print(last);
            ListNode *temp = head;
            ListNode *ptr= NULL;
            ListNode *out = NULL;
            
            while(last != NULL && temp != NULL){
                    if(ptr == NULL){
                       ptr = temp;
                       out = ptr;
                            
                            temp=temp->next;
                    }
                    else{
                           ptr->next = last;
                            last=last->next;
                            ptr=ptr->next;
                            
                            ptr->next = temp;
                            temp=temp->next;
                            ptr=ptr->next;
                    }
                  
            }
            
          
            //std::cout << last->val;
              while(last != NULL){
                    ptr->next = last;
                       last=last->next;
                      ptr = ptr->next;
                       
              }
            head = out;    
    }
};
