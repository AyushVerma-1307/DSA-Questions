class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums){
        vector<int> index;
        // sorting the original array
        sort(nums.begin(), nums.end());
        int c=0;
        int count=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                index.push_back(nums[i]);
            } 
        } 
        return index;
    }
};