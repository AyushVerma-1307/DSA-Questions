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
        // int minPrice=INT_MAX;
        // int maxProfit = INT_MIN;
        // findMaxProfit(prices,0,minPrice,maxProfit);
        int minPrice=INT_MAX;
        int maxProfit = INT_MIN;
        
        for(int i=0;i<prices.size();i++){
            if(prices[i]<minPrice)minPrice=prices[i];
            int todayProfit = prices[i]-minPrice;
            if(todayProfit>maxProfit) maxProfit=todayProfit;
        }
        return maxProfit;
    }
};