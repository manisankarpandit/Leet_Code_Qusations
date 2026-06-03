class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int i = 0;
        int j = k-1;
        int diff = nums[j]-nums[i];
        while(j<n){
            diff = min(diff,(nums[j]-nums[i]));
            i++;
            j++;
        }
        return diff;
    }
};