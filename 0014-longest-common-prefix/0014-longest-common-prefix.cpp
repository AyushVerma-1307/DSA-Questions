class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        int i=0;
        while(true){
            char curr=0;
            for(auto str:strs){
                if(i>=str.length()){
                    curr=0;
                    break;
                }
                if(curr == 0){
                    curr = str[i];
                }
                else if(str[i]!=curr){
                    curr=0;
                    break;
                }
            }
            if(curr == 0){
                break;
            }
            ans.push_back(curr);
            i++;
        }
        return ans;
    }
};