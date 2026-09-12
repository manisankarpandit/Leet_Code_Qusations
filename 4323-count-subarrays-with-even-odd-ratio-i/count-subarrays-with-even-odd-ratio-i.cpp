class Solution {
public:
    int countRatioSubarrays(vector<int>& nums, int a, int b) {
        int n = nums.size();
        int od = 0, ev = 0;
        int i = 0;
        int j = 0;
        int count = 0;
        while (i < n) {
            if (nums[j] % 2 != 0) od++;
            else  ev++;
            if (od > 0 && ev * b<=od * a) {
                count++;
            }
            j++;
            if (j == n) {
                i++;
                j = i;
                od = 0;
                ev = 0;
            }
        }
        return count;
    }
};