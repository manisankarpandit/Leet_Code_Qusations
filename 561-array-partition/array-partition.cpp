class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int sum = 0;
        int i = 0;
        int j = 1;
        while(i<n && j<n){
            sum += min(nums[i],nums[j]);
            i+=2;
            j+=2;
        }
        return sum;
    }
};