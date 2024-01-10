class Solution {
public:
    void merge(vector<int>&arr,int s,int e){
        int totalSize = e-s+1;
        int gap = totalSize/2 + totalSize%2;
        while(gap>0){
            int i=s,j=i+gap;
            while(j<=e){
                if(arr[i]>arr[j]){
                    swap(arr[i],arr[j]);
                }
                ++i,++j;
            }
            gap = gap <=1 ? 0 : (gap/2)+(gap%2);
        }
    }
    void mergeSort(vector<int>&arr,int s,int e){
        if(s>=e){
            return;
        }
        int mid = (s+e)>>1;
        mergeSort(arr,s,mid);
        mergeSort(arr,mid+1,e);
        merge(arr,s,e);
    }
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums,0,nums.size()-1);
        return nums;
    }
};