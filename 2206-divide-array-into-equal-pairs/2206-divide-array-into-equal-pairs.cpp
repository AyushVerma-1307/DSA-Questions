class Solution {
public:
    bool divideArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int size=nums.size()/2;
        int count=0;
        for(int i=0;i<nums.size();i+=2){
            if(nums[i]==nums[i+1]){
                count++;
            }
            else{
                return false;
            }
        }
        if(count==size){
            return true;
        }
        else{
            return false;
        }
    }
};