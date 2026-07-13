class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int n = arr.size();
        int sum = 0;
        for(int i = 0;i<n;i++){
            sum += arr[i];
        }
        if(sum%3 != 0) return false;
        int mean = sum/3;
        int count = 0;
        int currentSum = 0;
        for(int i = 0;i<n;i++){
            currentSum += arr[i];
            if(currentSum == mean){
                count++;
                currentSum = 0;
            }
        }
        if(count>=3)return true;
        else return false;
    }
};