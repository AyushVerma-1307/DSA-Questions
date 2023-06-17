class Solution {
public:
    string defangIPaddr(string address) {
        string result="";
        for(auto c : address)
            result+=(c=='.')?"[.]":string(1,c);
        return result;
    }
};