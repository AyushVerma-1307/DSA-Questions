class Solution {
public:
    
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<string, vector<string>> mp;
        
        for(auto str:strs){
            string s= str;
            sort(s.begin(),s.end());
            mp[s].push_back(str);
        }
        for(auto i:mp){
            ans.push_back(i.second);
        }
        return ans;
    }
};