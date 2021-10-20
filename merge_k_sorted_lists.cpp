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
        void printLists(ListNode *t1){
                ListNode *temp = t1;
                while(t1 != NULL){
                        std::cout << t1->val << " ";
                        t1=t1->next;
                }
                std::cout << "\n";
        }
        ListNode * merge(ListNode *t1,ListNode *t2){
                
                ListNode *a = t1;
                ListNode *b = t2;
                ListNode *out = NULL;
                ListNode *mergeNode = NULL;
           while(a != NULL &&  b != NULL){  
                if(a->val <= b->val){

                        if(mergeNode == NULL) {
                                out = a;
                                mergeNode = out;
                        }else{
                                out->next = a;
                                 out = out->next;
                        }
                        a=a->next;
              }
                else{
                       if(mergeNode == NULL) {
                                out = b;
                                mergeNode = out;
                        }else{
                                out->next = b;
                                out = out->next;
                        }
                        b=b->next;
                        
               }
                   
           }
                while(a != NULL){
                        out->next =a;
                        a=a->next;
                        out = out->next;
                }
                
                while(b != NULL){
                       out->next =b;
                        b=b->next;
                        out = out->next;
                }
                //printLists(mergeNode);
                return mergeNode;
        }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
            if(lists.size()== 0) return {};
            ListNode *mergedlists;
              bool bol = false;
             int i=0;
            while(bol == false && i<lists.size()){
                     if(&lists[i][0] != NULL) {
                          mergedlists = &lists[i][0]; 
                             bol = true;
                     }
                             i++;
            }
           
            while(bol == true && i<lists.size()){
                    if(&lists[i][0] != NULL) 
                    mergedlists = merge(mergedlists,&lists[i][0]);
                   
                    
                    i++;
            }
            //printLists(mergedlists);
            //std::cout << bol << "\n";
            if(bol == false) return {};
            //printLists(mergedlists);
            return mergedlists;
    }
};
