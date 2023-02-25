class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size()-1;
        if(n==0)return;
        else{
            int i=0,j=0;
            while(j<n+1){
                if(nums[j]!=0)
                {
                    swap(nums[i],nums[j]);
                    i++;
                }
                j++;
            }
        }
        return;
    }
};