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
    bool isPalindrome(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast!=NULL and fast->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode* head1 = NULL;
        while(slow!=NULL)
        {
            ListNode* nn = new ListNode(slow->val);
            nn -> next = head1;
            head1 = nn;
            slow=slow->next;
        }
        while(head1!=NULL and head!=NULL)
        {
            if(head1->val!=head->val) return 0;
            else
            {
                head=head->next;
                head1=head1->next;
            }
        }
        return 1;
    }
};