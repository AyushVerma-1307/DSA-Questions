class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        vector<int> positive;
        vector<int> negative;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0) positive.push_back(nums[i]);
            else{
                negative.push_back(nums[i]);
            }
        }
        int i=0,j=0,k=0;
        while(i<positive.size() && j< negative.size()){
            nums[k++] = positive[i++];
            nums[k++] = negative[j++];
        }
        while(i<positive.size())nums[k++] = positive[i++];
        while(j<negative.size())nums[k++] = negative[j++];
        
        return nums;
    }
};