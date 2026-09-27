class Solution {
public:
    string reverseParentheses(string s) {
        int n = s.size();
        int i = 0;
        int j = 0;
        string ans = "";
        while (i < s.size()) {
            if (s[i] == ')') {
                j = i - 1;
                while (j >= 0 && s[j] != '(') j--;
                reverse(s.begin() + j + 1, s.begin() + i);
                s.erase(i, 1);   
                s.erase(j, 1);  
                i = 0;           
            }
            else {
                i++;
            }
        }

        return s;
    }
};