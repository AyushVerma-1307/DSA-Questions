class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,int> mp1;
        unordered_map<char,bool> mp2;
        
        for(int i=0;i<s.size();i++){
            if(mp1[s[i]] == 0 && mp2[t[i]] == 0){
                mp1[s[i]] = t[i];
                mp2[t[i]] = 1;
            }
        }
        for(int i=0;i<s.size();i++){
            if(mp1[s[i]] != t[i]){
                return false;
            }
        }
        return true;
        
        
        
        
        
        
        
        
        
        
        
        //         int hash[256]={0};
//         bool tmapped[256]={0};
        
//         for(int i=0;i<s.size();i++){
//             if(hash[s[i]] == 0 && !tmapped[t[i]]){
//                 hash[s[i]] = t[i];
//                 tmapped[t[i]] = 1;
//             }
//         }
//         for(int i=0;i<s.size();i++){
//             if(hash[s[i]] != t[i]){
//                 return false;
//             }
//         }
//         return true;
        
    }
};