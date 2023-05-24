class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> mp;
        for(auto x:arr){
            mp[x]++;
        }
        vector<string> new1;
        for(int i=0;i<arr.size();i++){
            if(mp[arr[i]]==1)
                new1.push_back(arr[i]);
        }
        if(new1.size()<k){
            return "";
        }
        return new1[k-1];
    }
};