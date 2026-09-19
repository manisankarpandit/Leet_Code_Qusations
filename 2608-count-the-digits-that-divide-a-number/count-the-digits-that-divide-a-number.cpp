class Solution {
public:
    int countDigits(int n) {
        int count = 0;
        int a = n;
        while(n){
            int x = n % 10 ;
            if(a%x==0) count++;
            n = n/10;
        }
        return count;
    }
};