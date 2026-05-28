class Solution {
public:
    string sortVowels(string s) {
        int n = s.size();
        vector<int>lo(26,0),up(26,0);
        for(int i = 0;i<n;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                lo[s[i]-'a']++;
                s[i] = '#';
            }
            else if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                up[s[i]-'A']++;
                s[i] = '#';
            }
        }
        string vowel;
        //store upper char
        for(int i = 0;i<26;i++){
            char c = 'A' + i;
            while(up[i]){
                vowel+=c;
                up[i]--;
            }
        }
        //store lower char
        for(int i = 0;i<26;i++){
            char c = 'a' + i;
            while(lo[i]){
                vowel+=c;
                lo[i]--;
            }
        }
        int i = 0, j = 0;
        while(j<vowel.size()){
            if(s[i]=='#'){
                s[i]=vowel[j];
                j++;
            }
            i++;
        }
        return s;
    }
};