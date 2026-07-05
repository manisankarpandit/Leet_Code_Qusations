class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int n = nums.size();
        int digit_diff = INT_MIN;
        for(int i = 0;i<n;i++){
            string s = to_string(nums[i]);
            int mx = INT_MIN;
            int mn = INT_MAX;
            for(int j = 0;j<s.size();j++){
                int num = s[j] - '0';
                mx = max(mx,num);
                mn = min(mn,num);
            }
            digit_diff = max(digit_diff,mx-mn);
        }
        int sum = 0;
        for(int i = 0;i<n;i++){
            string s = to_string(nums[i]);
            int mx = INT_MIN;
            int mn = INT_MAX;
            for(int j = 0;j<s.size();j++){
                int num = s[j] - '0';
                mx = max(mx,num);
                mn = min(mn,num);
            }
            if(mx-mn == digit_diff) sum += nums[i];
        }
        return sum;
    }
};