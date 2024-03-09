class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int smallElement = INT_MAX;
        int i=0,j=0;
        
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i] == nums2[j]){
                smallElement = nums1[i];
                break;
            }
            else if(nums1[i] < nums2[j]){
                i++;
            }
            else{
                j++;
            }
        }
        if(smallElement == INT_MAX)return -1;
        else{
            return smallElement;
        }
    }
};