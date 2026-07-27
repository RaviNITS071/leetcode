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
        ListNode *dummy = new ListNode(-1);
        dummy -> next = head;
        ListNode *slow = dummy;
        ListNode *fast = head;

        if(head == NULL || head -> next == NULL) return NULL; 

        while(fast -> next != NULL){
            fast = fast -> next;
            slow = slow -> next;
            if(fast -> next == NULL){
                ListNode *temp = slow -> next;
                slow -> next = temp -> next;
                temp -> next = NULL;
                delete temp;
                return head;
            }
            fast = fast -> next;
        }

        if(fast -> next == NULL){
            ListNode *temp = slow -> next;
                slow -> next = temp -> next;
                temp -> next = NULL;
                delete temp;
        }

        return head;
    }
};