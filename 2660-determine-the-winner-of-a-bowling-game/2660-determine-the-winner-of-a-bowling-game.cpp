class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) {
        int sum1 = 0;
        int sum2 = 0;
        for(int i=0;i<player1.size();i++) {
            if (i >= 2 && (player1[i-1] == 10 || player1[i-2] == 10)) {
                sum1 += 2 * player1[i];
            } 
            else if(i >= 1 && player1[i-1] == 10) {
                sum1 += 2 * player1[i];
            } 
            // else if(i >= 1 && player1[i-1] + player1[i] == 10) {
            //     sum1 += 2 * player1[i];
            // } 
            else{
                sum1 += player1[i];
            }
        
            if(i >= 2 && (player2[i-1] == 10 || player2[i-2] == 10)) {
                sum2 += 2 * player2[i];
            } 
            else if(i >= 1 && player2[i-1] == 10) {
                sum2 += 2 * player2[i];
            } 
            // else if(i >= 1 && player2[i-1] + player2[i] == 10) {
            //     sum2 += 2 * player2[i];
            // } 
            else 
            {
                sum2 += player2[i];
            }
        
        }
    
        // Compare the scores and return the result
        if (sum1 > sum2) {
            return 1;
        } 
        else if(sum2 > sum1) {
            return 2;
        } 
        else{
            return 0;
        }
    }
};