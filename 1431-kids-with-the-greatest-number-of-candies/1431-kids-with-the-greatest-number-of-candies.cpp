class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int maxi=INT_MIN;
        for(int i=0;i<candies.size();i++){
            if(candies[i]>maxi){
                maxi=candies[i];
            }
        }
        for(int j=0;j<candies.size();j++){
            if(candies[j]+extraCandies >= maxi){
                result.push_back(true);
            }
            else{
                result.push_back(false);
            }
        }
        return result;
    }
};