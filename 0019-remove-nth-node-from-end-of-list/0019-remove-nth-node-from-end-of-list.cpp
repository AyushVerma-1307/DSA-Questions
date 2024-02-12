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
    int length(ListNode* head){
        int count = 0;
        ListNode* temp = head;
        while(temp != NULL){
            count++;
            temp = temp -> next;
        }
        return count;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = length(head);
        int pos = len - n;
        int count = 0;
        ListNode* curr = head;
        ListNode* prev = head;
        if(pos == 0){
            head = head->next;
            return head;
        }
        while(curr != NULL){
            if(count == pos){
                prev->next = curr->next;
                curr->next = NULL;
                break;
            }
            else{
                prev = curr;
                curr = curr->next;
                count++;
            }
        }

        return head;
    }
};