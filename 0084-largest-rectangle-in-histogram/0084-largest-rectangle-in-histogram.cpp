class Solution {
public:
    vector<int> nextSmaller(vector<int> arr){
        stack<int> st;
        st.push(-1);
        vector<int> ans(arr.size());
        for(int i=arr.size()-1;i>=0;i--){
            int curr = arr[i];
            while(st.top() != -1 && arr[st.top()]>=curr){
                st.pop();
            }
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }
    vector<int> prevSmaller(vector<int> arr){
        stack<int> st;
        st.push(-1);
        vector<int> ans(arr.size());
        for(int i=0;i<arr.size();i++){
            int curr = arr[i];
            while(st.top() != -1 && arr[st.top()]>=curr){
                st.pop();
            }
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        
        vector<int> prev = prevSmaller(heights);
        vector<int> next = nextSmaller(heights);
        
        int maxArea = 0;
        
        for(int i=0;i<n;i++){
            int l = heights[i];
            if(next[i] == -1){
                next[i] = n;
            }
            int b = next[i]-prev[i]-1;
            
            maxArea = max(maxArea,l*b);
        }
        return maxArea;
    }
};