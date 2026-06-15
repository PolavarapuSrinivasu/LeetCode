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
        int numberOfNodes = 0;

        ListNode* temp = head;

        while (temp != NULL) {
            numberOfNodes++;
            temp = temp->next;
        }

        if (numberOfNodes == 1) {
            head = NULL;
        }

        else if (numberOfNodes == 2) {
            head->next = NULL;
        }

        else {
            temp = head;

            int mid = numberOfNodes / 2;

            while (mid > 1) {
                temp = temp->next;
                mid--;
            }

            temp->next = temp->next->next;
        }

        return head;
    }
};