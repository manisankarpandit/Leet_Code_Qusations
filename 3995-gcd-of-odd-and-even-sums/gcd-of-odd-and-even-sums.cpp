class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        // return n;
        int sOdds = n*n;
        int sEvens = (n*n)+n;
        while(sEvens){
            int rem = sOdds % sEvens;
            sOdds = sEvens;
            sEvens = rem;
        }
        return sOdds;
    }
};