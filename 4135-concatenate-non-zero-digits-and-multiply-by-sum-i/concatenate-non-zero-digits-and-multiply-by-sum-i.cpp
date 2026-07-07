class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n==0) return 0;
        string s = to_string(n);
        string t = "";
        int sum = 0;
        for(int i = 0;i<s.size();i++){
            if(s[i]-'0'!=0){
                t+=s[i];
                sum += s[i]-'0';
            }
        }
        long long x = stoll(t);
        long long res = x*sum;
        return res;
    }
};