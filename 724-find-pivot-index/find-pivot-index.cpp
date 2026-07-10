class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int actualSum = 0;
        for(int i = 0;i<n;i++){
            actualSum += nums[i];
        }
        int sum = 0;
        for(int i = 0;i<n;i++){
           int ans = actualSum - sum - nums[i];
            if (ans == sum) {
                return i;
            }
            sum += nums[i];
        }
        return -1;
    }
};