class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums){
        int x=nums.size();
        vector<int> ans(x);
        int pos=0,neg=1;
        for(int n:nums){
            if(n>0){
                ans[pos]=n;
                pos+=2;
            }
            else{
                ans[neg]=n;
                neg+=2;
            }
        }
        return ans;
    }
};