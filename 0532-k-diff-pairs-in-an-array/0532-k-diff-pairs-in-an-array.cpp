class Solution {
public:
    int bs(vector<int>& arr,int start, int x){
        int l=start,r=arr.size()-1;
        while (l <= r) {
            int m = l + (r - l) / 2;
            if (arr[m] == x)
                return m;
            if (arr[m] < x)
                l = m + 1;

            else
                r = m - 1;
        }
        return -1;
    }
    int findPairs(vector<int>& nums, int k) {
        int i=0,j=1;
        set<pair<int,int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(bs(nums,i+1,k+nums[i]) != -1){
                ans.insert({nums[i],nums[i]+k});
            }
        }
        return ans.size();
    }
};