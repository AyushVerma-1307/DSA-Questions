class Solution {
public:
    void solve(vector<int> nums,vector<vector<int>>& ans,int index){
        // bacse case
        if(index>=nums.size()){
            ans.push_back(nums);
            return;
        }
        
        for(int j=index;j<nums.size();j++){
            swap(nums[index],nums[j]);
            solve(nums,ans,index+1);
            // backtrack
            swap(nums[index],nums[j]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        int index=0;
        solve(nums,ans,index);
        set<vector<int>> st;
        for(auto i:ans){
            st.insert(i);
        }
        ans.clear();
        for(auto i:st){
            ans.push_back(i);
        }
        return ans;
    }
};