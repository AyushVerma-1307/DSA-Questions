class Solution {
public:
    bool isPowerOfTwo(int n) {

        for(int i=0;i<=30;i++){
            int num= pow(2,i);
            if (num==n)
            {
                return true;
            }
            
        }
        return false;
    }
};