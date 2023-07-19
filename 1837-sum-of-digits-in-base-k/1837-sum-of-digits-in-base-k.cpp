class Solution {
public:
    int sumBase(int n, int k) {
        int sum=0;
        int rem=0,i=1;
        while(n!=0){
            sum+=n%k;
            n=n/k;
        }
        return sum;
    }
};