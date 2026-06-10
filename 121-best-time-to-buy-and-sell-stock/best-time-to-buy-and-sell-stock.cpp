class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n = nums.size();
        int mn = INT_MAX;
        int profit = 0;
        for(int i = 0;i<n;i++){
            mn = min(mn,nums[i]);
            profit = max(profit,nums[i]-mn);
        }
        return profit;
    }
};