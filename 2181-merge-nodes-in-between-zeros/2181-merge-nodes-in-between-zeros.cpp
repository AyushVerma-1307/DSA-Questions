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
    // This function merges consecutive nodes in the linked list whose value is 0.
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head->next;
        ListNode* ansHead = NULL;
        ListNode* ansTail = ansHead;
        int sum = 0;

        // Traverse through the linked list
        while (temp != NULL) {
            sum = sum + temp->val;

            // If the current node's value is 0, merge it with the previous node
            if (temp->val == 0) {
                temp->val = sum;
                sum = 0;

                // If ansHead is NULL, set ansHead and ansTail to the current node
                if (ansHead == NULL) {
                    ansHead = temp;
                    ansTail = temp;
                } 
                // Otherwise, append the current node to the merged list
                else {
                    ansTail->next = temp;
                    ansTail = temp;
                }
            }
            temp = temp->next; // Move to the next node
        }
        return ansHead; // Return the head of the merged list
    }

};