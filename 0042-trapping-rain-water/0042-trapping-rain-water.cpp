class Solution {
public:
    int trap(vector<int>& arr) {
        int n=arr.size();
        int leftMax = arr[0];
        int rightMax = arr[n-1];
        
        int left=0;
        int right=n-1;
        int trappedWater = 0;
        while(left<=right){
            if(arr[left]<=arr[right]){
                if(arr[left]>=leftMax){
                    leftMax = arr[left];
                }
                else{
                    trappedWater += leftMax - arr[left];
                }
                left++;
            }
            else{
                if(arr[right] >= rightMax){
                    rightMax = arr[right];
                }
                else{
                    trappedWater += rightMax - arr[right];
                }
                right--;
            }
        }
        return trappedWater;
    }
};