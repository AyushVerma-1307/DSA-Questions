class Solution {
public:
    void merge(vector<int>&arr,vector<int>&temp,int s,int mid,int e){
        int i=s,j=mid+1,k=s;
        while(i<=mid && j<=e){
            if(arr[i]<=arr[j]){
                temp[k++]=arr[i++];  
            }
            else{
                temp[k++]=arr[j++];
            }
        }
        while(i<=mid){
            temp[k++]=arr[i++];
        }
        while(j<=e){
            temp[k++]=arr[j++];
        }
        while(s<=e){
            arr[s]=temp[s];
            s++;
        }
    }
    void mergeSort(vector<int>&arr,vector<int>&temp,int s,int e){
        if(s>=e){
            return;
        }
        int mid = s+(e-s)/2;
        mergeSort(arr,temp,s,mid);
        mergeSort(arr,temp,mid+1,e);
        merge(arr,temp,s,mid,e);
    }
    vector<int> sortArray(vector<int>& nums) {
        vector<int> temp(nums.size(),0);
        mergeSort(nums,temp,0,nums.size()-1);
        return nums;
    }
};