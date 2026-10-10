class Solution {
public:
    int minInsertions(string s) {
       int n = s.size();
        int count = 0;
        int add = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                count += 2;
            } 
            else {
                count--;
                if (count < 0) {
                    add++;
                    count = 1;
                }
                if (count % 2 != 0 && i+1<n && s[i+1] == '(') {
                    add++;
                    count--;
                }
            }
        }
        return add + count;
    }
};