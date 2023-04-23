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
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        if(head==NULL){
            return NULL;
        }
        //step1-we check that if k group is avaliable or not to reverse
        int avaliable = k, cnt = 0;
        ListNode* temp = head;
        while(avaliable > 0 && temp != NULL){
            temp = temp -> next;
            avaliable--;
        }
        if(avaliable==0){
        //step2- we reverse for first k group
            ListNode* next=NULL;
            ListNode* curr=head;
            ListNode* prev=NULL;
            while(curr!=NULL && cnt<k){
                next = curr -> next;
                curr -> next = prev;
                prev = curr;
                curr = next;
                cnt++;
            }
            //step3-we recursively take care of the remaining cases that are left out
            if(next != NULL){
                head -> next = reverseKGroup(next,k);
            }
            //step4 return prev as at last it will be the new head
            return prev;
        }
        //return head as the k group is not present to reverse
        return head;
        
    }
};