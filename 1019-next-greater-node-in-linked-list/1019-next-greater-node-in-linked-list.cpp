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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> arr;
        ListNode* temp = head;

        // Traverse the linked list and store node values in the vector
        while (temp != nullptr) {
            arr.push_back(temp->val);
            temp = temp->next;
        }

        stack<int> st;
        vector<int> result(arr.size(), 0); // Initialize result vector with zeros

        for (int i = 0; i < arr.size(); i++) {
            while (!st.empty() && arr[st.top()] < arr[i]) {
                result[st.top()] = arr[i];
                st.pop();
            }
            st.push(i);
        }

        return result;
    }
};