class Solution {
private:
    void solve(vector<int>& nums,vector<vector<int>>& ans,vector<int> ds,int index)
    {
        ans.push_back(ds) ;
        for(int i = index ;i<nums.size();i++) {
            if(i!=index && nums[i] == nums[i-1]) continue;
                ds.push_back(nums[i]);
                solve(nums,ans,ds,i+1);
                ds.pop_back();
        }
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        int index=0;
        sort(nums.begin(),nums.end());
        solve(nums,ans,ds,index);
        return ans;
    }
};