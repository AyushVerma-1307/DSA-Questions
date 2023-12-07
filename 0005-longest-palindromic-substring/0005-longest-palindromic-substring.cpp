class Solution {
public:
    bool check(string&s,int i, int j){
        while(i<=j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    string longestPalindrome(string s) {
        
        string ans="";
        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                if(check(s,i,j)){
                    string str = s.substr(i,j-i+1);
                    ans = str.size() > ans.size() ? str : ans;
                }
            }
        }
        return ans;
    }
};