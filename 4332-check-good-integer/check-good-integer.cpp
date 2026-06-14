class Solution {
public:
    bool checkGoodInteger(int n) {
        string s = to_string(n);
        int digitSum = 0, SquereSum = 0;
        for(int i = 0;i<s.size();i++){
            int num = s[i]-'0';
            digitSum += num;
            SquereSum += num*num;
        }
        if(SquereSum - digitSum >= 50) return true;
        return false;
    }
};