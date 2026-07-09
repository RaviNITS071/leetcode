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
        ListNode *t1 = headA;
        ListNode *t2 = headB;
        ListNode *ans = NULL;

        int c1 = 0, c2 = 0;

        while(t1 != NULL){
            c1 ++;
            t1 = t1 -> next;
        }
        while(t2 != NULL){
            c2 ++;
            t2 = t2 -> next;
        }

        t1 = headA;
        t2 = headB;

        if(c2 >= c1){
            int m = c2 - c1;
            while(m != 0 && t2 -> next != NULL){
                t2 = t2 -> next;
                m--;
            }
        }

        if(c1 >= c2){
            int m = c1 - c2;
            while(m != 0 && t1 != NULL){
                t1 = t1 -> next;
                m--;
            }
        }
        
        while(t1 != NULL && t2 != NULL){
            if(t1 == t2) {
                ans =  t1;
                break;
            }

            t1 = t1 -> next;
            t2  = t2 -> next;
        }

        return ans;
    }
};