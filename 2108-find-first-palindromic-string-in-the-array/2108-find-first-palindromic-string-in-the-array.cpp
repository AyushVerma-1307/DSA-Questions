class Solution {
public:
    bool palin(string new1){
        int s=0,e=new1.size()-1;
        while(s<e){
            if(new1[s]!=new1[e]){
                return false;
            }
            s++;
            e--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(auto x:words){
            if(palin(x)){
                return x;
            }
        }
        return "";
    }
};