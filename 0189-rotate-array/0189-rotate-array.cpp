class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> arr(nums.size());
        int n=nums.size();
        for(int i=0;i<n;i++){
            arr[(i+k)%n]=nums[i];
        }
        nums=arr;
    }
};