class Solution {
public:
    bool uniformArray(vector<int>& nums) {
        int n = nums.size();
        int mn = INT_MAX;
        int count  = 0;
        for(int i = 0;i<n;i++){
            mn = min(mn,nums[i]);
            if(nums[i]%2 != 0) count++;
        }
        if (count == 0 || mn % 2 != 0) return true;
        else return false;
    }
};