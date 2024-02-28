class Solution {
public:
    vector<int> nextSmaller(vector<int> arr,int n){
        stack<int> st;
        st.push(-1);
        vector<int> ans(n);
        
        for(int i=n-1;i>=0;i--){
            int curr = arr[i];
            while(st.top() != -1 && arr[st.top()]>=curr){
                st.pop();
            }
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }
    vector<int> prevSmaller(vector<int> arr,int n){
        stack<int> st;
        st.push(-1);
        vector<int> ans(n);
        
        for(int i=0;i<n;i++){
            int curr = arr[i];
            while(st.top() != -1 && arr[st.top()]>=curr){
                st.pop();
            }
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }
    int largestRect(vector<int> &arr){
        int n=arr.size();
        
        vector<int> prev = prevSmaller(arr,n);
        vector<int> next = nextSmaller(arr,n);
        
        int maxArea = 0;
        for(int i=0;i<n;i++){
            int l = arr[i];
            if(next[i] == -1){
                next[i] = n;
            }
            int b = next[i] - prev[i] - 1;
            maxArea = max(maxArea,l*b);
        }
        return maxArea;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        vector<vector<int>> temp;
        int row = matrix.size();
        int col = matrix[0].size();
        
        for(int i=0;i<row;i++){
            vector<int> v;
            for(int j=0;j<col;j++){
                v.push_back(matrix[i][j] - '0');
            }
            temp.push_back(v);
        }
        
        int area = largestRect(temp[0]);
        
        for(int i=1;i<row;i++){
            for(int j=0;j<col;j++){
                if(temp[i][j]){
                    temp[i][j] += temp[i-1][j];
                }
                else{
                    temp[i][j] = 0;
                }
            }
            area = max(area,largestRect(temp[i]));
        }
        return area;
    }
};