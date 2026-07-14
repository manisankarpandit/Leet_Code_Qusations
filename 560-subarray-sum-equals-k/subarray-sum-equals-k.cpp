class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        for(int j = 0;j<n;j++){
            int sum = 0;
            for(int i = j;i<n;i++){
                sum+=nums[i];
                if(sum == k) count++;
            }
        }
        return count;
    }
};