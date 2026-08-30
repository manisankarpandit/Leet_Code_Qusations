class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int mn = INT_MAX;
        int mx = INT_MIN;
        int mxidx = -1, mnidx = -1;
        for(int i = 0;i<n;i++){
            if(nums[i]>mx){
                mx = nums[i];
                mxidx = i;
            }
            if(nums[i]<mn){
                mn = nums[i];
                mnidx = i;
            }
        }
        
         int left = max(mnidx, mxidx) + 1;

        // Both from right
        int right = max(n - mnidx, n - mxidx);

        // One from left, one from right
        int mixed = min(mnidx, mxidx) + 1
                  + n - max(mnidx, mxidx);

        return min({left, right, mixed});
    }
};