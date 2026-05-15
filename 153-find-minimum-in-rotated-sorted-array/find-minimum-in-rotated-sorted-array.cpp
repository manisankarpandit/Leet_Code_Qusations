class Solution {
public:
    int findMin(vector<int>& nums) {
        // int n = nums.size();
        // int min = INT_MAX;
        // for(int i = 0;i<n;i++){
        //     if(nums[i]<min){
        //         min = nums[i];
        //     }
        // }
        // return min;
        //using binary search
        int n = nums.size();
        int lo = 0;
        int hi = n-1;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            // if (nums[mid]==nums[hi]) return nums[hi];
            if(nums[mid]<nums[hi]) hi = mid;
            else if(nums[mid]>nums[hi])lo = mid+1;
            else hi--;
        }
        return nums[lo];

    }
};