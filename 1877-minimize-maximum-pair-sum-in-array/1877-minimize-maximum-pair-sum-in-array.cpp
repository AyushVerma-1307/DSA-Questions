class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0;
        for(int i=0;i<nums.size()/2;i++){
            int sum=0;
            sum=nums[i]+nums[nums.size()-i-1];
            ans=max(ans,sum);
        }
        return ans;
    }
};