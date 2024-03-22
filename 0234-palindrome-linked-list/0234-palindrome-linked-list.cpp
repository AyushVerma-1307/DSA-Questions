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
    ListNode* midElement(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast && fast->next){
            fast = fast -> next -> next;
            slow = slow -> next;
        }
        return slow;
    }
    ListNode* reverse(ListNode* &head,ListNode* prev,ListNode* curr){
        if(curr == NULL){
            head = prev;
            return head;
        }
        ListNode* forward = curr -> next;
        curr -> next = prev;
        return reverse(head,curr,forward);
    }
    bool isPalindrome(ListNode* head) {
        ListNode* mid = midElement(head);
        mid->next = reverse(mid->next,NULL,mid->next);
        
        ListNode* temp1 = head;
        ListNode* temp2 = mid->next;
        
        while(temp2 != NULL){
            if(temp1 -> val != temp2 -> val){
                return false;
            }
            temp1 = temp1 -> next;
            temp2 = temp2 -> next;
        }
        return true;
    }
};