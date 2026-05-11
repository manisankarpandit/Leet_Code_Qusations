class Solution {
public:
     void solve(int n, vector<int>& ans) {
        if(n <= 9) {
            ans.push_back(n);
            return;
        }
        solve(n / 10, ans);
        ans.push_back(n % 10);
    }
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++) {
            solve(nums[i], ans);
        }
        return ans;
    }
};