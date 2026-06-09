class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int n = nums.size();
        long long mx = LLONG_MIN;
        long long mn = LLONG_MAX;
        // int mx = INT_MIN, mn = INT_MAX;
        for(int i = 0;i<n;i++){
            mx = max(mx,(long long)(nums[i]));
            mn = min(mn,(long long)(nums[i]));
        }
        long long a = (mx-mn)*(long long)(k);
        return a;
    }
};