class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        string t = "";
        for(int i = 0;i<n;i++){
            char ch = s[i];
            if(ch>=97 && ch<=122){
                t.push_back(ch);
            }
            else if(ch>=65 && ch<=90){
                t.push_back(ch+32);
            }
            else if(ch >= '0' && ch <= '9') {
                t.push_back(ch);
            }
        }
        int i = 0;
        int j = t.size()-1;
        while(i<=j){
            if(t[i]!=t[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};