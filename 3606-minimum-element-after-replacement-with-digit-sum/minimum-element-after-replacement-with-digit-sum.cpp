class Solution {
public:
    int minElement(vector<int>& nums) {
        int n = nums.size();
        vector<int>arr;
        for(int i = 0;i<n;i++){
            int sum = 0;
            int num = nums[i];
            while(num){
               sum += num%10;
               num/=10;
            } 
            arr.push_back(sum);
        }
        int mini = INT_MAX;
        for(int i = 0;i<n;i++){
            mini = min(mini,arr[i]);
        }
        return mini;
    }
};