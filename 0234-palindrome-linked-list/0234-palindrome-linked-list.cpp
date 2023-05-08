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
class Solution{
  private:
    ListNode* getMid(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head-> next;
        while(fast != NULL && fast -> next != NULL){
            fast = fast-> next ->next;
            slow = slow -> next;
        }
        return slow;
    }
    ListNode* reverse(ListNode* head){
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;
        
        while(curr != NULL){
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(ListNode *head)
    {
        //Your code here
        if(head -> next == NULL){
            return true;
        }
        ListNode* middle = getMid(head); 
        
        ListNode* temp = middle -> next;
        
        middle -> next = reverse(temp);
        
        ListNode* head1 = head;
        ListNode* head2 = middle -> next;
        while(head2 != NULL){
            if(head1 -> val != head2 -> val){
                return false;
            }
            head1= head1 -> next;
            head2 = head2 -> next;
        }
        // step 4 repeat step 2 
        temp = middle -> next;
        middle -> next = reverse(temp);
        return true;
    }
};
