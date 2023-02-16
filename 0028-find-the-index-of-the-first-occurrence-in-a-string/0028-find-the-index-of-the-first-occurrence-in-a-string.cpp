class Solution {
public:
    int strStr(string hay, string ned) {
        if(hay.size()==0 || ned.size()==0){
            return 0;
        }
        else if(ned.size()>hay.size()){
            return -1;
        }
        else{
            for(int i=0;i<hay.size();i++){
                if(hay[i]==ned[0]){
                    if (hay.substr(i, ned.size()) == ned)
                    {
                        return i;
                    }
                }
            }
            return -1;
        }
    }
};