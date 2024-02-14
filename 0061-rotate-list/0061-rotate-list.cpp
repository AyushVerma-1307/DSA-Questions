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
    int findLength(ListNode* head){
        int count = 0;
        ListNode* temp = head;
        while(temp!= NULL){
            count++;
            temp = temp -> next;
        }
        return count;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL || head->next == NULL) return head;
    
        // Get the length of the linked list
        int len = findLength(head);

        // Update k to be k % len to handle cases where k is greater than the length of the list
        k = k % len;

        // If k is 0 after taking modulo, no rotation is needed
        if (k == 0) return head;

        ListNode* temp = head;
        int count = 0;
        while (count < len - k - 1) { // Stop just before the kth node from the end
            temp = temp->next;
            count++;
        }

        // Store the node just before the kth node from the end
        ListNode* newHead = temp->next;

        // Update the next of the last node to point to the original head
        temp->next = NULL;

        // Traverse to the end of the rotated list
        temp = newHead;
        while (temp->next) {
            temp = temp->next;
        }

        // Join the end of the rotated list to the original head
        temp->next = head;

        return newHead;
    }
};