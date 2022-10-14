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
    ListNode* deleteMiddle(ListNode* head) {
        
      int i=0;
        ListNode* node=head;
        while(node!=NULL){
            node=node->next;
            i++;
        }
        node=head;
      if(i==1){
         
          return NULL;
          }
        int half=0;
       
        ListNode* temp=head;
        while(half<((i/2))){
            temp=temp->next;
            half++;
        }
        while(node->next!=temp){
            node=node->next;
        }
        node->next=temp->next;
        delete(temp);
        return head;
    }
};