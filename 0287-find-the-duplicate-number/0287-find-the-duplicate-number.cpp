class Solution {
public:
    int findDuplicate(vector<int>& nums) {
//         1st approach
//         sort(nums.begin(),nums.end());
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]==nums[i+1]){
//                 return nums[i];
//             }
//         }
//         return -1;
        
//         2nd approach
//         int ans=-1;
//         for(int i=0;i<nums.size();i++){
//             int index = abs(nums[i]);
            
//             if(nums[index]<0){
//                 ans = index;
//             }
            
//             nums[index] *= -1;
//         }
//         return ans;
        
        // 3rd approach positioning method
        
        while(nums[0] != nums[nums[0]]){
            swap(nums[0],nums[nums[0]]);
        }
        return nums[0];
        
    }
};