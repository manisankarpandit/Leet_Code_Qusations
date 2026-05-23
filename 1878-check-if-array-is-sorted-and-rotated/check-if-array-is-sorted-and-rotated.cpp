class Solution {
public:
    bool check(vector<int>& nums) {
        // int n = nums.size();
        // if (n == 1)
        //     return true;
        // // for (int i = 1; i < n; i++) {
        // //     if (nums[i] >= nums[i - 1])
        // //         return true;
        // //     else
        // //         return false;
        // // }
        //  bool sorted = true;
        // for (int i = 1; i < n; i++) {
        //     if (nums[i] < nums[i - 1]) {
        //         sorted = false;
        //         break;
        //     }
        // }
        // if (sorted) return true;
        // int k = 0;
        // for (int i = 1; i < n; i++) {
        //     if (nums[i] > nums[i - 1])
        //         k++;
        // }
        // // reverse(nums.begin(), nums.begin() + k);
        // for (int i = 0, j = k - 1; i <= j; i++, j--) {
        //     int temp = nums[i];
        //     nums[i] = nums[j];
        //     nums[j] = temp;
        // }
        // //  reverse(nums.begin() + k, nums.end());
        // for (int i = k, j = n - 1; i <= j; i++, j--) {
        //     int temp = nums[i];
        //     nums[i] = nums[j];
        //     nums[j] = temp;
        // }
        // //  reverse(nums.begin(), nums.end());
        // for (int i = 0, j = n - 1; i <= j; i++, j--) {
        //     int temp = nums[i];
        //     nums[i] = nums[j];
        //     nums[j] = temp;
        // }
        // for (int i = 1; i < n; i++) {
        //     if (nums[i] < nums[i - 1])
        //         return false;
        //     else if (nums[n - 1] > nums[0])
        //         return false;
        // }
        //  if (nums[n - 1] > nums[0])
        //     return false;
        // return true;

        // // if (nums[n-1]>nums[0]) k++;
        // // if (k>1) return false;
        // // else return true;
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]>nums[(i+1)%n]){
                count++;
            }
        }
        if(count>1) return false;
        else return true;

    }
};