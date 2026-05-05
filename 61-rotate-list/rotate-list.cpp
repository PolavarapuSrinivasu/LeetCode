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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL || head->next == NULL || k == 0)
            return head;

        int nodesCount = 0;

        ListNode* temp = head;

        while (temp != NULL) {
            nodesCount++;
            temp = temp->next;
        }

        k = k % nodesCount;

        if (k == 0)
            return head;

        nodesCount -= k;

        temp = head;
        while (nodesCount > 1) {
            temp = temp->next;
            nodesCount--;
        }

        ListNode* mid = temp->next;
        ListNode* ss = mid;

        while (mid->next != NULL) {
            mid = mid->next;
        }

        temp->next = NULL;
        mid->next = head;
        head = ss;

        return head;
    }
};