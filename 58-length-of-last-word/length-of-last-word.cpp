class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int count = 0;
        bool flag = false;
        for(int i = n-1;i>=0;i--){
            if(s[i]!=' '){
                count++;
                flag = true;
            }
            else if(flag) break;
        }
        return count;
    }
};