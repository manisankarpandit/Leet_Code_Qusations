class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>next(n),prev(n);
        next[0] = nums[0];
        for(int i = 1;i<n;i++){
            next[i] = max(next[i-1],nums[i]);
        }
        prev[n-1] = nums[n-1];
        for(int i = n-2;i>=0;i--){
            prev[i] = min(prev[i+1],nums[i]);
        }
        for(int i = 0;i<n;i++){
            if(next[i]-prev[i]<=k) return i;
        }
        return -1;
    }
};