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
    int count1=0;
    int count2=0;
    int res=0;
    int n=s.size();
    for(int i=0;i<n;i++)
    {
        if(s[i]=='{')
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    if(abs(count2-count1)%2!=0)
    {
        return -1;
    }
    stack<char>st;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='{')
        {
            st.push(s[i]);
        }
        else
        {
        if(s[i]=='}' && st.empty())
        {
            st.push(s[i]);
        }
        else if((s[i]=='}') && (st.top()=='{'))
        {
            st.pop();
        }
        else
        {
            st.push(s[i]);
        }
        }
    }
    while(!st.empty())
    {
        char a=st.top();
        st.pop();
        char b=st.top();
        st.pop();
        if(a==b)
        {
            res+=1;
        }
        else
        {
            res+=2;
        }
    }
    return res;
}