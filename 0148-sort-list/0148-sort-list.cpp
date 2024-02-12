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
    ListNode* sortList(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
        vector<int>answer;

        ListNode *temp = head;
        while(temp!=NULL){
            answer.push_back(temp->val);
            temp=temp->next;
        }

        sort(answer.begin(),answer.end());
        
        int i=0;
        temp = head;
        while(temp!=NULL){
            temp->val = answer[i];  // change values in linked list
            i++;
            temp = temp->next;
        }

        return head;
    }
};
