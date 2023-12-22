class Solution {
public:
    void findMaxProfit(vector<int>& price,int i,int&minPrice, int& maxProfit){
        if(i==price.size())return;
        if(price[i]<minPrice)minPrice = price[i];
        int todayProfit = price[i]-minPrice;
        if(todayProfit>maxProfit) maxProfit=todayProfit;
        
        findMaxProfit(price,i+1,minPrice,maxProfit);
    }
    int maxProfit(vector<int>& prices) {
        int minPrice=INT_MAX;
        int maxProfit = INT_MIN;
        findMaxProfit(prices,0,minPrice,maxProfit);
        return maxProfit;
    }
};