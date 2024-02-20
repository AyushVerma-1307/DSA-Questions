//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends


int countRev (string s)
{
    // your code here
    if(s.size() & 1 ){
        return -1;
    }
    stack<char> st;
    
    for(auto ch : s){
        if(ch == '{'){
            st.push(ch);
        }
        else{
            if(!st.empty() && st.top()=='{' ){
                st.pop();
            }
            else{
                st.push(ch);
            }
        }
    }
    int count=0;
    while(!st.empty()){
        char temp1 = st.top(); st.pop();
        char temp2 = st.top(); st.pop();
        
        if(temp1 == temp2){
            count+=1;
        }
        else{
            count+=2;
        }
    }
    return count;
}