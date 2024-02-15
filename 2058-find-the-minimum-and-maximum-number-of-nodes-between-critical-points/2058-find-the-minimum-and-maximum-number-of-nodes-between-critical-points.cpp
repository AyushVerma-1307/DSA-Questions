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
        vector<int> ans = {-1,-1};

        // Check if head or its next two nodes are null, if yes return ans
        if(!head || !head->next || !head->next->next){
            return ans;
        }

        // Initialize pointers
        ListNode* prev = head;
        ListNode* curr = head->next;
        ListNode* nxt = head->next->next;

        // Initialize variables to track critical points and distances
        int firstCp = -1;
        int lastCp = -1;
        int minDis = INT_MAX;
        int i = 1;

        // Loop until nxt is not null
        while(nxt){
            // Check if curr is a critical point
            bool cp = ((prev->val < curr->val && curr->val > nxt->val) || 
                       (prev->val > curr->val && curr->val < nxt->val ))
                        ? true : false;

            // If it's a critical point and it's the first one encountered
            if(cp && firstCp == -1){
                firstCp = i;
                lastCp = i;
            }
            // If it's a critical point and it's not the first one encountered
            else if(cp){
                minDis = min(minDis, i - lastCp);
                lastCp = i;
            }

            // Update pointers and index
            prev = curr;
            curr = nxt;
            nxt = nxt->next;
            i++;
        }

        // If there's only one critical point, return ans
        if(lastCp == firstCp){
            return ans;
        }
        // Otherwise, update ans with the distances
        else{
            ans[0] = minDis;
            ans[1] = lastCp - firstCp;
        }
        return ans; 
    }
};