class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();
        int idx = -1;
        for(int i = 0;i<n;i++){
            int x = nums[i];
            int sum = 0;
            while(x){
                int rem = x%10;
                sum += rem;
                x/=10;
            }
            if(sum==i){
                idx = i;
                break;
            }
        }
        return idx;
    }
};