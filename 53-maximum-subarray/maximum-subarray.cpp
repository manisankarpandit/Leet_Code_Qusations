class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int mx = INT_MIN, prefix = 0;
        for(int i = 0;i<n;i++){
            prefix += nums[i];
            mx = max(mx,prefix);
            if(prefix<0) prefix = 0;
        }
        return mx;
    }
};