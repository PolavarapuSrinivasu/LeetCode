/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* Head1 = headA;
        ListNode* Head2 = headB;
        int c1 = 0, c2 = 0;
        while(Head1!=NULL|| Head2!=NULL)
        {
            if(Head1!=NULL)
            {
                c1++;
                Head1=Head1->next;
            }
            if(Head2!=NULL)
            {
                c2++;
                Head2=Head2->next;
            }
        } 
        int a = abs(c1 - c2);
        ListNode* Headmax;
        ListNode* Headmin;
        if(c1>c2)
        {
            Headmax = headA;
            Headmin = headB;

        }
        else
        {
            Headmax = headB;
            Headmin = headA;

        }
        while(a)
        {
            Headmax = Headmax->next;
            a--;
        }
        while(Headmax!=NULL && Headmin!=NULL)
        {
           if(Headmax == Headmin)
           {
               return Headmax;
           }
           Headmax = Headmax->next;
           Headmin = Headmin->next;
        }
        return NULL;
    }
};