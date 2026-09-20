class Solution {
public:
    int reverseDegree(string s) {
        int n = s.size();
        int sum = 0;
        for(int i = 0;i<n;i++){
            // int x = int(s[i]);
            // int idx = (123-x);
            // int product = idx*(i+1);
            //sum+=product;
            sum += (123-int(s[i]))*(i+1);
        }
        return sum;
    }
};