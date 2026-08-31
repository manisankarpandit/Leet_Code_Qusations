class Solution {
public:
    bool sumGame(string num) {
        int n = num.size();
        int leftCount = 0, rightCount = 0;
        int leftSum = 0, rightSum = 0;
        for (int i = 0; i < n; i++) {
            if (i < n/2) {
               if( num[i] == '?') leftCount++;
               else{
                    int dig = num[i]-'0';
                    leftSum += dig;
               }
            }
            if(i>= n/2){
                if(num[i]=='?') rightCount++;
                else{
                    int dig = num[i]-'0';
                    rightSum += dig;
                }
            }
        }
        if ((leftCount - rightCount) % 2 != 0) return true;
        if (leftSum - rightSum != 9 * (rightCount - leftCount) / 2) return true;
        return false;
    }
};