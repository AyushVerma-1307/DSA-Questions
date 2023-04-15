class Solution {
private:
    void solve(vector<int>& candi,int target,vector<vector<int>>& ans,vector<int> output,int index){
        if(index == candi.size()){
            if(target == 0){
                ans.push_back(output);
            }
            return;
        }
        //include
        if(candi[index] <= target)
        {            
            output.push_back( candi[index]);
            solve(candi,target-candi[index],ans,output,index);
            output.pop_back();
        }
        
        
        //exclude
        solve(candi,target,ans,output,index+1);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> output;
        int index=0;
        solve(candidates,target,ans,output,index);
        return ans;
    }
};