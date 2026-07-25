class Solution {
public:
    int maxProduct(int n) {
        string s = to_string(n);
        int mx1 = INT_MIN, mx2 = INT_MIN;
        for(int i = 0;i<s.size();i++){
            int num = s[i]-'0';
            if(num>mx1){
                mx2 = mx1;
                mx1 = num;
            }
            else if(num>mx2){
                mx2 = num;
            }
        }
        int mul = mx1 * mx2;
        return mul;
    }
};