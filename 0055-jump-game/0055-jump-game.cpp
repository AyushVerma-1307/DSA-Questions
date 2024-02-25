class Solution {
public:
    bool canJump(vector<int>& nums) {
        int finalIdx = nums.size()-1;
        for(int i=nums.size()-2;i>=0;i--){
            if(i+nums[i] >= finalIdx) finalIdx = i;
        }
        return finalIdx==0;
    }
};