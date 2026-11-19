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
        ListNode* temp=head;
        ListNode* dummy=new ListNode(100);
        ListNode* curr=dummy;
        while(temp){
            if(temp->val!=val){
                curr->next=temp;
                temp=temp->next;
                curr=curr->next;
            }else{
                while(temp!=NULL && temp->val==val )temp=temp->next;
                curr->next=temp;
            }
        }
        return dummy->next;
    }
};