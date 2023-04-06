class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> arr;
        for(int i=0;i<accounts.size();i++){
            int sum=0;
            for(int j=0;j<accounts[i].size();j++){
                sum=sum+accounts[i][j];
            }
            arr.push_back(sum);
        }
        int  max=INT_MIN;
        for(int k=0;k<arr.size();k++){
            if(arr[k]>max){
                max=arr[k];
            }
        }
        return max;
    }
};