class Solution {
public:
    bool isPerfectSquare(int num){
        int s=0,e=num;
        long long int mid=s+(e-s)/2;
        while(s<=e){
            long long int mid=s+(e-s)/2;
            long long int square=mid*mid;
            if(square==num){
                return true;
            }
            else if(square>num){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return false;
    }
};