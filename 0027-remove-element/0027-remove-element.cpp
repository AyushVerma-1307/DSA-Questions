class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int s=0,e=nums.size()-1;
        
        while(s<=e){
            if(nums[s]==val){
                swap(nums[s],nums[e]);
                e--;
                nums.pop_back();
            }
            else{
                s++;
            }
        }
        if(nums.size()==1){
            return nums.size();
        }
        return nums.size();
    }
};