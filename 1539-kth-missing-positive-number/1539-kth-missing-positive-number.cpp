class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        if(arr.empty() || arr[0] > k)
            return k;
        int n = arr.size();
        if(arr[n-1] < n+k)
            return n+k;
        int l = 0, r = n-1;
        while(l < r)
        {
            int m = (l+r)/2;
            if((arr[m]-(m+1)) < k)
                l = m+1;
            else
                r = m;
        }
        return k+l;
    }
};