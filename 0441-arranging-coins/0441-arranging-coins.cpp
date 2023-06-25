class Solution {
public:
    int arrangeCoins(int n) {
        int s=1,e=n;
        long long int mid=0,k=0;
        while(s<=e){
            mid=s+(e-s)/2;
            k=mid*(mid+1)/2;
            if(k==n){
                return mid;
            }
            else if(k<n){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return e;

    }
};