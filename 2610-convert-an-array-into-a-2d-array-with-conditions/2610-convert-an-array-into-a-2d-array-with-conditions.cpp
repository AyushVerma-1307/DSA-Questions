class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int> mp;
        int cnt=0;
        for(auto i:nums){
            mp[i]++;
            cnt = max(cnt,mp[i]);
        }
        vector<vector<int>> ans(cnt);
        for(auto i:mp){
            for(int x=0;x<i.second;x++){
                ans[x].push_back(i.first);
            }
        }
        return ans;
    }
};