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
    ListNode* getMiddle(ListNode* head){
        if(head == NULL || head -> next == NULL){
            return head;
        }
        //2 nodes
        if(head -> next -> next == NULL){
            return head-> next;
        }

        ListNode* slow = head;
        ListNode* fast = head->next;

        while(fast != NULL){
            fast = fast->next;
            if(fast!=NULL){
                fast = fast->next;
            }
            slow = slow->next;
    } 
    return slow;
}
    int getLength(ListNode* head){
        int len = 0;
        while(head != NULL){
            len++;
            head = head -> next;
        }
        return len;
    }
    ListNode* middleNode(ListNode* head) {
        return getMiddle(head); 
        /*
        int len = getLength(head);
        int ans = (len/2);

        ListNode* temp = head;
        int cnt=0;
        while(cnt < ans){
            temp = temp -> next;
            cnt++;
        }
        return temp;
        */
    }
};