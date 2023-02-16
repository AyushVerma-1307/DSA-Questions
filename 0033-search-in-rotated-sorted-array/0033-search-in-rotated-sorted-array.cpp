class Solution {
public:
    int search(vector<int>& nums, int target) {
    if(nums.size()==0)
        return -1;
    int low=0,high=nums.size()-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(target==nums[mid])
        {
            return mid;
        }

        if(nums[mid]<nums[high])
        {
            if((target>nums[mid])&&(target<=nums[high]))
            low=mid+1;
            else
            high=mid-1;
        }

        else if(nums[mid]>=nums[high])
        {
            if((target<nums[mid])&&(target>=nums[low]))
            high=mid-1;
            else
            low=mid+1;
        }
    }
    return -1;
}
};