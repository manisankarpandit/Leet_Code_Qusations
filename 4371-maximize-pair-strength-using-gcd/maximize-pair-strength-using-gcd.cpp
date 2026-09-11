class Solution {
public:
    int gcd(int a, int b) {
        if (b == 0) return a;
        return gcd(b, a % b);
    }
    long long maxPairStrength(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = 1;
        long long ans = 0;
        while(j<n){
            long long x = gcd(nums[i], nums[j]); 
            ans = max(ans, (1LL * nums[i] * nums[j]) / (x * x)); 
            j++;
            if(j>=n){
                i++;
                j=i+1;
            }
        }
        return ans;
    }
};