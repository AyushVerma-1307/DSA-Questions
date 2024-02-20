//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        stack<int> st;
        for(int i=0;i<n;i++){
            st.push(i);
        }
        
        while(st.size() != 1){
            int a = st.top(); st.pop();
            int b = st.top(); st.pop();
            
            if(M[a][b]){
                // a is not celebrity , discard a and push b
                st.push(b);
            }
            else{
                // b is not celebrity, discard b and push a
                st.push(a);
            }
        }
        
        int mightCelebrity = st.top(); st.pop();
        
        //check the row of this element all 0's
        for(int i=0;i<n;i++){
            if(M[mightCelebrity][i] != 0){
                return -1;
            }
        }
        
        //check the column of this element all 1's
        for(int i=0;i<n;i++){
            if(M[i][mightCelebrity] != 1 && i != mightCelebrity){
                return -1;
            }
        }
        
        // means it is clebrity
        return mightCelebrity;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends