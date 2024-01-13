class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
            mp[t[i]]--;
        }

        int ans =0;

        for(int i=0;i<mp.size();i++){
            ans += max(0,mp[i]);
        }

        return ans;
    }
};