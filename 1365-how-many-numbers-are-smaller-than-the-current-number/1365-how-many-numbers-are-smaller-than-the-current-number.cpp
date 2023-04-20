class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> arr;
        for(int i=0;i<nums.size();i++){
            int count=0;
            int max=nums[i];
            for(int j=0;j<nums.size();j++){
                if(max>nums[j]){
                    count++;
                }
            }
            arr.push_back(count);
        }
        return arr;
    }
};