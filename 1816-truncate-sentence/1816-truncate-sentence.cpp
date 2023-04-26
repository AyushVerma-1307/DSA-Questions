class Solution {
public:
    string truncateSentence(string s, int k) {
        string new1;
        int spaces=1;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                spaces++;
                if(spaces<=k){
                    new1+=s[i];
                }
            }
            else if(spaces<=k){
                new1+=s[i];
            }
            else{
                break;
            }   
        }
        return new1;
    }
};