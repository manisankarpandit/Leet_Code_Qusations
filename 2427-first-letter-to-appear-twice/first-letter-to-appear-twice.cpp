class Solution {
public:
    char repeatedCharacter(string s) {
        int n = s.size();
        unordered_map<char,int>m;
        for(int i = 0;i<n;i++){
            m[s[i]]++;
            if(m[s[i]]==2) return s[i];
        }
        // char ch;
        // for(int i = 0;i<n;i++){
        //     {
        //         ch = s[i];
        //         break;
        //     }
        // }
        return ' ';
    }
};