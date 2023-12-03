class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int hash[256]={0};
        bool tmapped[256]={0};
        
        for(int i=0;i<s.size();i++){
            if(hash[s[i]] == 0 && !tmapped[t[i]]){
                hash[s[i]] = t[i];
                tmapped[t[i]] = 1;
            }
        }
        for(int i=0;i<s.size();i++){
            if(hash[s[i]] != t[i]){
                return false;
            }
        }
        return true;
        
    }
};