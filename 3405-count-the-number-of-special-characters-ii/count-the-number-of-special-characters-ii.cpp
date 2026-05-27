class Solution {
public:
    int numberOfSpecialChars(string w) {
        int n = w.size();
        vector<int>up(26,-1),lo(26,-1);
        for(int i = 0;i<n;i++){
            if(islower(w[i])){
                lo[w[i]-'a'] = i;
            }
            else{
                if(up[w[i]-'A'] == -1) up[w[i]-'A'] = i;
            }
        }
        int count = 0;
        for(int i = 0;i<26;i++){
            if(lo[i]!=-1 && up[i]!= -1 && lo[i]<up[i]) count++;
        }
        return count;
    }
};