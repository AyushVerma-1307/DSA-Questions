class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int x=matrix[0].size();
        int rowindex=0;
        int colindex=x-1;
        while(rowindex<n && colindex>=0){
            int element=matrix[rowindex][colindex];
            if(element==target){
                return 1;
            }
            else if(element<target){
                rowindex++;
            }
            else{
                colindex--;
            }
        }
        return 0;
    }
};