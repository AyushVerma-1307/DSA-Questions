class Solution {
public:
    int compress(vector<char>& s) {
        int index=0;
        int prev=s[0];
        int count=1;
        
        for(int i=1;i<s.size();i++){
            if(s[i]==prev){
                count++;
            }
            else{
                s[index++]=prev;
                if(count>1){
                    int start = index;
                    while(count>0){
                        s[index++]=(count%10)+'0';
                        count /= 10; 
                    }
                    reverse(s.begin()+start,s.begin()+index);
                }
                prev=s[i];
                count=1;
            }
        }
        s[index++] = prev;
        if(count>1){
            int start = index;
            while(count>0){
                s[index++]=(count%10)+'0';
                count /= 10; 
            }
            reverse(s.begin()+start,s.begin()+index);
        }
        return index;
    }
};