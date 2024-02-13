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
    ListNode* findMid(ListNode* head){
        if (head == NULL || head->next == NULL) {
            return head;
        }
        ListNode* slow = head;
        ListNode* fast = head->next;

        while (fast != NULL && fast->next != NULL) {
            fast = fast->next->next; // Move fast by two steps
            slow = slow->next;       // Move slow by one step
        }
        return slow;
    }
    ListNode* merge(ListNode* &left, ListNode* &right){
        if(left == NULL) return right;
        if(right == NULL) return left;
        
        ListNode* ansHead = new ListNode(-1);
        ListNode* ansTail = ansHead;
        while(left != NULL && right != NULL){
            if(left -> val <= right -> val){
                ansTail -> next = left;
                ansTail = left;
                left = left -> next;
            }
            else{
                ansTail -> next = right;
                ansTail = right;
                right = right -> next;
            }
            
        }
        
        if(left){
            ansTail -> next = left;
        }
        if(right){
            ansTail -> next = right;
        }
        return ansHead->next;
    }
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head -> next == NULL){
            return head;
        }
        
        ListNode* mid = findMid(head);
        ListNode* left = head;
        ListNode* right = mid -> next;
        
        mid -> next = NULL;
        
        left = sortList(left);
        right = sortList(right);
        
        ListNode* mergedList = merge(left,right);
        
        return mergedList;
        
    }
};
