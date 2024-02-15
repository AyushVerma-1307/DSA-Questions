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
        
        if(!head || !head->next || !head->next->next){
            return ans;
        }
        ListNode* prev = head;
        ListNode* curr = head -> next;
        ListNode* nxt = head -> next -> next;
        
        int firstCp = -1;
        int lastCp = -1;
        
        int minDis = INT_MAX;
        int i=1;
        while(nxt){
            bool cp = ((prev->val < curr->val && curr->val > nxt->val) || 
                       (prev->val > curr->val && curr->val < nxt->val ))
                        ? true : false;
            if(cp && firstCp == -1){
                firstCp = i;
                lastCp = i;
            }
            else if(cp){
                minDis = min(minDis, i - lastCp);
                lastCp = i;
            }
            prev = curr;
            curr = nxt;
            nxt = nxt->next;
            i++;
        }
        if(lastCp == firstCp){
            return ans;
        }
        else{
            ans[0] = minDis;
            ans[1] = lastCp - firstCp;
        }
        return ans;
    }
};