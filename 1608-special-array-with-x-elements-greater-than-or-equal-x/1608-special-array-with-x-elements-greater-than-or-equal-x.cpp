class Solution {
public:
    int specialArray(vector<int>& nums) {
        int start=1; 
        int end= nums.size();
        while (start<=end){
            int mid= start+(end-start)/2;
            int x=0;
            for (int i=0; i<nums.size(); i++){
                if (nums[i]>=mid)
                    x++;
            }
            if (mid==x)
                return mid;
            if (x<mid)
                end= mid-1;
            else 
                start= mid+1;
        }
        return -1;
    }
};