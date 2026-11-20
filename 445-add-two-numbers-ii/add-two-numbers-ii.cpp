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
    ListNode* reverse(ListNode* head){
        if(head==NULL || head->next==NULL)return head;
        ListNode* temp=reverse(head->next);
        head->next->next=head;
        head->next=NULL;

        return temp;


    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       l1=reverse(l1);
       l2=reverse(l2);

    //    3 4 2 7
    // 4 6 5
    // 10 7 0 8 7
    // 
        ListNode* dummy = new ListNode(100);
        ListNode* temp = dummy;

        ListNode* temp1 = l1;
        ListNode* temp2 = l2;

        int carry = 0;

        while(temp1 != NULL || temp2 != NULL) {

            int sum = carry;

            if(temp1 != NULL) {
                sum += temp1->val;
                temp1 = temp1->next;
            }

            if(temp2 != NULL) {
                sum += temp2->val;
                temp2 = temp2->next;
            }

            int digit = sum % 10;
            carry = sum / 10;

            temp->next = new ListNode(digit);
            temp = temp->next;
        }
        if(carry!=0) temp->next=new ListNode(1);

        return reverse(dummy->next);
    }
};