class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        int ans=0;
        for(int i=0,e=n-1;i<m;i++){
            int s=0;
            while(s<=e){
                int mid=s+(e-s)/2;
                if(grid[i][mid]<0){
                    e=mid-1;
                }
                else{
                    s=mid+1;
                }
            }   
            ans+=n-s;
        }
        return ans;
        
    }
};