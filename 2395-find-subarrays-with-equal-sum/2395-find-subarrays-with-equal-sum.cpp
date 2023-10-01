class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        vector<int> weights;
        int n = nums.size();

        for (int i = 0; i < n - 1; i++) {
            int sum = nums[i] + nums[i + 1];
            weights.push_back(sum);
        }

        sort(weights.begin(), weights.end());

        for (int i = 0; i < weights.size() - 1; i++) {
            int sum1 = weights[i];
            int sum2 = weights[i + 1];
            if (sum1 == sum2) {
                return true;
            }
        }

        return false;
    }
};