class Solution {
public:
    int balancedStringSplit(string s) {
        int rcount=0,lcount=0,ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='R'){
                rcount++;
            }
            else{
                lcount++;
            }
            if(rcount==lcount){
                ans++;
                lcount=rcount=0;
            }
        }
        return ans;
    }
};