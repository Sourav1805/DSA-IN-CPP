
class Solution {
public:
    ListNode* helper(ListNode* head){
        if(head==NULL ||head->next==NULL){
            return head;
        }
        ListNode* temp=head->next->next;
        ListNode* newhead=head->next;
        head->next->next=head;
        head->next=helper(temp);
        return newhead;
    }
    ListNode* swapPairs(ListNode* head) {
       return helper(head);
       
        
    }
};