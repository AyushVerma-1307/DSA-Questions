class Solution {
public:
    int minimumSum(int num) {
        int temp = num;
        vector<int>arr;
        
        while(temp !=0)
        {
            int digit = temp%10;
            arr.push_back(digit);
            temp = temp/10; 
        }
        
        sort(arr.begin(),arr.end());
        
        int new1= arr[0]*10+arr[3];
        
        int new2= arr[1]*10+arr[2];
        
        
        return new1+new2;
    }
};