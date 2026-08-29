class Solution {
public:
    bool checkDivisibility(int n) {
        int ori = n;
        int sum = 0;
        int product = 1;
        while(n){
            int dig = n%10;
            n /= 10;
            sum += dig;
            product *= dig;
        }
        if(ori % (sum + product)==0) return true;
        else return false;
    }
};