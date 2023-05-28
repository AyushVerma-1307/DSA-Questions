class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int n = mat.size(), m = mat[0].size();
        vector<pair<int, int>> a;  // cnt, num
        for (int i = 0; i < n; i++) {
            int cnt = 0;
            for (int j = 0; j < m; j++)
                cnt += mat[i][j];
            a.emplace_back(cnt, i);
        }
        
        sort(a.begin(), a.end());
        vector<int> ans;
        for (int i = 0; i < k; i++)
            ans.push_back(a[i].second);
        
        return ans;
    }
};