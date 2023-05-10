/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        map<ListNode* , bool> visited;
        ListNode* first = headA;
        ListNode* second = headB;
        while(first != NULL){
            visited[first] = true;
            first = first -> next;
        }
        
        while(second != NULL){
            if(visited[second] == true){
                return second;
            }
            visited[second]=true;
            second = second -> next;
        }
        return NULL;
    }
};