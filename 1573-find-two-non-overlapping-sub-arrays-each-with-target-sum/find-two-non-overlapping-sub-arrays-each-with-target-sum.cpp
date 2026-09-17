class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int n = arr.size();
        int k = INT_MAX;
        vector<int>left(n,k);
        vector<int>right(n,k);
        // for left 
        int sum = 0;
        int j = 0;
        int minLen = k;
        for(int i = 0;i<n;i++){
            sum += arr[i];
            while(sum>target){
                sum-=arr[j];
                j++;
            }
            if(sum==target){
                minLen = min(minLen,i-j+1);
            }
            left[i] = minLen;
        }
        //for Right
        sum = 0;
        j = n-1;
        minLen = k;
        for(int i = n-1;i>=0;i--){
            sum += arr[i];
            while(sum>target){
                sum -= arr[j];
                j--;
            }
            if(sum == target){
                minLen = min(minLen, j-i+1);
            }
            right[i] = minLen;
        }
        int ans = k;
        for(int i = 0;i<n-1;i++){
            if(left[i]!=k && right[i+1]!=k){
                ans = min(ans, left[i]+right[i+1]);
            }
        }
        if(ans==k) return -1;
        return ans;
    }
};