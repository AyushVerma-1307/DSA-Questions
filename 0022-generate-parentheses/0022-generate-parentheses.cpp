class Solution {
private:
    void solve(int open,int close,vector<string> &ans,string output){
        if(open == 0 && close ==0){
            ans.push_back(output);
            return;
        }
        if(open>0){
            // output.push_back('(');
            solve(open-1,close,ans,output + '(' );
        }
        if(close>0 && close > open){
            // output.push_back(')');
            solve(open,close-1,ans,output + ')');
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string output;
        solve(n,n,ans,output);
        return ans;
    }
};