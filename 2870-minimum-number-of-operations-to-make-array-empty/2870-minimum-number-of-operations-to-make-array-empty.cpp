class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto i:nums){
            mp[i]++;
        }
        int count=0;
        for(auto i:mp){
            int t= i.second;
            if(t == 1){
                return -1;
            }
            count += t/3;
            if(t%3)count++;
        }
        return count;
    }
};