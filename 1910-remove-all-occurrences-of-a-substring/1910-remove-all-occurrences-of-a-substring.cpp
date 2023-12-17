class Solution {
public:
    void removeOcc(string& s, string& part){
        int value = s.find(part);
        if(value != string::npos){
            string left = s.substr(0,value);
            string right = s.substr(value+part.size(),s.size());
            s = left+right;
            
            removeOcc(s,part);
        }
        else{
            return;
        }
    }
    string removeOccurrences(string s, string part) {
        // int pos = s.find(part);
        // while(pos != string::npos){
        //     s.erase(pos,part.length());
        //     pos = s.find(part);
        // }
        removeOcc(s,part);
        return s;
    }
};