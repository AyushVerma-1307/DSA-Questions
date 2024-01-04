class Solution {
public:
    void solve(vector<string> &ans,int open,int close,string output){
        if(open == 0 && close==0){
            ans.push_back(output);
            return;
        }
        
        //include 
        if(open>0)solve(ans,open-1,close,output+'(');
        
        if(close>open)solve(ans,open,close-1,output+')');
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        int open=n;
        int close=n;
        string output="";
        solve(ans,open,close,output);
        return ans;
    }
};