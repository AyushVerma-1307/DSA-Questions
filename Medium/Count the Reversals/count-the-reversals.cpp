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
    if(s.length() % 2 != 0){
        return -1;
    }
    
    int i = 0;
    stack<char> st;
    int count = 0;
    while(i<s.length()){
        
        if(s[i] == '{'){
            st.push(s[i]);
            i++;
        }
        else{
            if(!st.empty() && st.top() == '{'){
                st.pop();
                i++;
            }
            else{
                s[i] = '{';
                count++;
            }
        }
    }
    if(st.size() % 2 != 0){
        return -1;
    }
    else{
        return count + (st.size()/2);
    }
}