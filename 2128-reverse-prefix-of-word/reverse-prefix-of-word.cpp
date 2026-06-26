class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n = word.size();
        int idx = 0;
        for(int i = 0;i<n;i++){
            if(word[i]==ch){
                idx = i;
                break;
            }
        }
        string s ="";
        for(int i = idx;i>=0;i--){
           s+=word[i];
        }
        for(int i = idx+1;i<n;i++){
            s+=word[i];
        }
        // reverse(word.begin(),word.begin()+idx);
        return s;
    }
};