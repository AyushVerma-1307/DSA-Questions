class Solution {
public:
    void help(int i,int k,int n,vector<int> vec,vector<vector<int>>&ans,vector<int>&nums){
        if(k==vec.size()){
            if(n==0){
            ans.push_back(vec);
            return;
            }
            if(n<0){
                return;
            }
        }
        if(i==nums.size()){
            return;
        }
        
        vec.push_back(nums[i]);
        help(i+1,k,n-nums[i],vec,ans,nums);
        vec.pop_back();
        help(i+1,k,n,vec,ans,nums);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>nums{1,2,3,4,5,6,7,8,9};
        vector<int>vec;
        vector<vector<int>> ans;
        help(0,k,n,vec,ans,nums);
        return ans;
    }
};