class Solution {
private:
    void solve(vector<int>& nums,set<vector<int>>& ans,vector<int> ds,int index){
        if(index == nums.size()){
            sort(ds.begin(),ds.end());
            ans.insert(ds);
            return;
        }
        
        //exclude
        solve(nums,ans,ds,index+1);
        
        //include
        ds.push_back(nums[index]);
        solve(nums,ans,ds,index+1);
        ds.pop_back();
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector<int>> res;
        vector<int> ds;
        int index=0;
        solve(nums,res,ds,index);
        for (auto it = res.begin(); it != res.end(); it++) {
            ans.push_back( * it);
        }
        return ans;
    }
};