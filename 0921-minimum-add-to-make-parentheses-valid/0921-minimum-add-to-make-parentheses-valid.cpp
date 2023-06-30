class Solution {
public:
    int minAddToMakeValid(string s) {
        int c=0,ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                c++;
            }
            else if(c==0){
                ans++;
            }
            else{
                c--;
            }
        }
        return c+ans;

    }
};