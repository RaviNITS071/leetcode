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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if(head == NULL || head -> next == NULL || head -> next -> next == NULL) return {-1,-1};
        int minD = 0, maxD = 0;
        int count = 2;
        int firstCp = 0;
        int cp = 0;
        int prevCp = 0;

        ListNode* prev = head;
        ListNode *curr = head -> next;
        ListNode *front = curr -> next;


        while(front != NULL){
            if((curr -> val < prev-> val && curr -> val < front -> val) || (curr -> val > prev -> val && curr -> val > front -> val)){
                cp++;
                if(firstCp == 0) firstCp = count;
                if(cp == 2){
                   
                    minD = count - firstCp;
                    maxD  = count - firstCp;
                }

                else if(cp > 2){
                    minD = min(minD, count - prevCp);
                    maxD = max(maxD, count - firstCp);
                }


                prevCp = count;
            
            }

            prev = prev -> next;
            curr = curr -> next;
            front = front -> next;
            count++;
        }

        if(cp < 2) return {-1,-1};

        return {minD,maxD};
    }
};