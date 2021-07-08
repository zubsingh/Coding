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
    ListNode* addTwoNumbersUtil(ListNode *l1,ListNode *l2){
        
        ListNode* head = l1;
        ListNode* lastone = l2;
        ListNode* prev = NULL;
        int carry=0;
        while(l1 != NULL && l2 !=NULL){
            int x = l1->val +l2->val + carry;
            std::cout << l1->val << std::endl;
            if(x > 9){
                l1->val = x%10;
                carry = x/10;
            }  
            else{
                l1->val = x;
                carry = 0;
            }
            prev = l1;
            l1 = l1->next;
            l2 = l2->next;
            
        }
        //std::cout << l1->val << std::endl;
        while(l1 != NULL){
            int x = l1->val+carry;
            if(x > 9){
                l1->val = x%10;
                carry = x/10;
            }
            else{
                l1->val = x;
                carry = 0;
            }
            prev = l1;
            l1=l1->next;
        }
        
        if(carry > 0){
            lastone->val = carry;
            prev->next = lastone;
            lastone->next = NULL;
        } 
        return head;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* a = l1;
        ListNode* b = l2;
        int alen =0;
        int blen =0;
        while(a != NULL){
            a=a->next;
            alen++;
        }
        while(b != NULL){
            b=b->next;
            blen++;
        }
        if(alen >= blen){
            return addTwoNumbersUtil(l1,l2);
        }
        return addTwoNumbersUtil(l2,l1);
    }
};
