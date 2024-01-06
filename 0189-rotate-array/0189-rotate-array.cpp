class Solution {
public:
    void reverse(vector<int>& nums, int start, int end) {
        while (start < end) {
            swap(nums[start], nums[end]);
            start++;
            end--;
        }
    }

    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        
        // Handle the case when k is greater than the size of nums
        k = k % n;

        // Reverse the entire array
        reverse(nums, 0, n - 1);

        // Reverse the first k elements
        reverse(nums, 0, k - 1);

        // Reverse the remaining elements
        reverse(nums, k, n - 1);
        
        // vector<int> arr(nums.size());
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     arr[(i+k)%n]=nums[i];
        // }
        // nums=arr;
    }
};