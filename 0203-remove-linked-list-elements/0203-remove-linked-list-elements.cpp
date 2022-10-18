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
    ListNode* removeElements(ListNode* head, int val) {
           while(head!=NULL&&head->val==val){
            head=head->next;
            
        }
        ListNode *temp1=head;
        ListNode *temp2=NULL;
        
        while (temp1!=NULL){
          
         if(temp1->val==val){
             temp2->next=temp1->next;
             temp1=temp1->next;
         }
          else{  
            temp2=temp1;
        temp1=temp1->next;
        }
        }
        
        return head;
    }
};