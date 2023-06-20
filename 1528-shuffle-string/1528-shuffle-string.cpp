class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string new1=s;
        for(int i=0;i<indices.size();i++){
            new1[indices[i]]=s[i];
        }
        return new1;
    }
};