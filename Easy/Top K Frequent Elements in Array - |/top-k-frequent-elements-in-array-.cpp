//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k) {
        // Code here
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
             mp[nums[i]]++;
        }
        vector<int>ans;
        vector<pair<int,int>>v;
        for(auto it:mp){
             v.push_back({it.second,it.first});
        }
        sort(v.rbegin(),v.rend());
        for(int i=0;i<k;i++){
             ans.push_back(v[i].second);
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends