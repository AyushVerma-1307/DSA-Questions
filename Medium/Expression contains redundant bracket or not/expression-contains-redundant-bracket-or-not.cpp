//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int checkRedundancy(string s) {
        // code here
        stack<int> st;
        for(auto i:s){
            if( i== '(' || i == '+' || i== '*' || i=='/'|| i=='-'){
                st.push(i);
            }
            else if( i == ')'){
                int count =0;
                while(st.top() != '('){
                    count++;
                    st.pop();
                }
                st.pop();
                if(count == 0){
                    return 1;
                }
            }
        }
        return 0;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        
    
        string s; 
        cin>>s;
        
        Solution obj;
        int res = obj.checkRedundancy(s);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends