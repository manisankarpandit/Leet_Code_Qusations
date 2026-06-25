class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int n = nums.size();
        int count = 0;
        for(int i = 0;i<n;i++){
            int tcount = 0;
            for(int j = i;j<n;j++){
                if(nums[j]==target) tcount++;
                int len = j-i+1;
                if(2*tcount>len) count++;
            }
        }
        return count;
    }
};