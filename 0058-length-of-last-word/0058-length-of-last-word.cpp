class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=0,j=s.size()-1;
        while(j>=0){
            if(s[j]==' '){
                if(i!=0)
                    return i;
            }
            else{
                i++;
            }
            j--;
        }
        return i;
    }
};