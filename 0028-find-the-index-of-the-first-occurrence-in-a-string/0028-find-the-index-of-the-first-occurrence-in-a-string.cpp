class Solution {
public:
    int strStr(string s, string part) {
        int n=s.size();
        int m=part.size();
        for(int i=0;i<=n-m;i++){
            for(int j=0;j<m;j++){
                if(part[j]!=s[i+j]){
                    break;
                }
                if(j==m-1){
                    return i;
                }
            }
        }
        return -1;
    }
};