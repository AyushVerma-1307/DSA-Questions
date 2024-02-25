class Solution {
public:
    int compress(vector<char>& s) {
        if(s.size()==1) return 1;
        int index = 0; //to keep track of new compressed char
        int prev = s[0];
        int count =1;
        
        for(int i=1;i<s.size();i++){
            if(s[i] == prev){
                count++;
            }
            else{
                s[index++] = prev;
                if(count>1){
                    string compressedCount = to_string(count);
                    for(char ch:compressedCount){
                        s[index++] = ch;
                    }
                }
                prev = s[i];
                count = 1;
            }
        }
        s[index++]=prev;
        if(count>1){
            string compressedCount = to_string(count);
            for(char ch:compressedCount){
                s[index++] = ch;
            }
        }
        return index;
    }
};