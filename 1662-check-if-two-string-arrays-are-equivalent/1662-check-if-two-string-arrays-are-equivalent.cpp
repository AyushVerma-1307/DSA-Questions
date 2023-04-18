class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string new1,new2;
        for(int i=0;i<word1.size();i++){
            new1+=word1[i];
        }
        for(int j=0;j<word2.size();j++){
            new2+=word2[j];
        }
        return new1==new2;
    }
};