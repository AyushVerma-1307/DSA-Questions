class Solution {
public:
    bool isPalindrome(int x) {
        int s=0;
        string e=to_string(x);
        int end=e.size()-1;
        while(s<end){
            if(e[s]!=e[end]){
                return 0;
            }
            s++;
            end--;
        }
        return 1;
    }
};