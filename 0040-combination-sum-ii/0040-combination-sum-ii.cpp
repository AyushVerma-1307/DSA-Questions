class Solution {
private:
    void solve(vector<int>& arr,int target,vector<vector<int>>& ans,vector<int> output, int index){
        if (target == 0) {
            ans.push_back(output);
            return;
        }
        if(target<0 || index>=arr.size()){
            return;
        }
        for (int i = index; i < arr.size(); i++) {
            if (i > index && arr[i] == arr[i - 1]) continue;
            output.push_back(arr[i]);
            solve(arr,target - arr[i], ans, output,i + 1);
            output.pop_back();
        }
}
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> output;
        int index=0;
        solve(candidates,target,ans,output,index);
        return ans;
    }
};