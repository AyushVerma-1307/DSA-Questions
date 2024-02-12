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
    ListNode* oddEvenList(ListNode* head) {
        
        ListNode* evenHead = new ListNode(-1);
        ListNode* evenTail = evenHead;
        ListNode* oddHead = new ListNode(-1);
        ListNode* oddTail = oddHead;
        
        int count = 1;
        ListNode* temp = head;
        while(temp != NULL){
            ListNode* newNode = new ListNode(temp->val); 
            if (count % 2 != 0) {
                oddTail->next = newNode; 
                oddTail = newNode; 
            } else {
                evenTail->next = newNode; 
                evenTail = newNode; 
            }
                temp = temp -> next;
                count++;
        }
        oddHead = oddHead -> next;
        oddTail -> next = evenHead -> next;
        
        return oddHead;
    }
};