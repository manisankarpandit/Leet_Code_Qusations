class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n = nums.size();
        int mx = INT_MIN, mn = INT_MAX;
        for(int  i = 0;i<n;i++){
            mx = max(mx,nums[i]);
            mn = min(mn,nums[i]);
        }
        while(mn){
            int rem = mx % mn;
            mx = mn;
            mn = rem;
        }
        return mx;
    }
};