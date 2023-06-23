class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>q;
        int i,j,n=s.size();
        if(!n) return s;
        
        q.push(s[0]);
        for(i=1;i<n;i++)
        {
            if(!q.empty() && q.top()==s[i])
                q.pop();
            else
                q.push(s[i]);
        }
        s="";
        while(!q.empty())
        {
            s+=q.top();
            q.pop();
        }
        reverse(s.begin(),s.end());
        return s;
}   
};  