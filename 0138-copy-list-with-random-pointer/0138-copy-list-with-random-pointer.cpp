/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head)return head;
        
        //step 1: clone the LL
        Node* temp = head;
        while(temp){
            Node* newNode = new Node(temp->val);
            newNode -> next = temp->next;
            temp->next = newNode;
            temp = temp -> next -> next;
        }
        
        //step 2: Assign random links of newnode A' with help of old node A
        temp = head;
        while(temp){
            Node* newNode = temp ->next;
            newNode -> random =temp -> random ? temp -> random -> next : nullptr; 
            temp = temp -> next -> next;
        }
        //step 3: Detach A' from A
        temp = head;
        Node* clonedHead = temp -> next;
        while(temp){
            Node* clonedHead = temp -> next;
            temp -> next = temp -> next -> next;
            if(clonedHead -> next != NULL){
                clonedHead -> next = clonedHead -> next -> next;
            }
            temp = temp -> next;
        }
        return clonedHead;
    }
};