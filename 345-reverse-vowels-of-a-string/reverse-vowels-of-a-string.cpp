class Solution {
public:
    bool isVowels(char ch){
        if(ch=='a' ||ch=='e' ||ch=='i' ||ch=='o' ||ch=='u') return true;
        else if(ch=='A' ||ch=='E' ||ch=='I' ||ch=='O' ||ch=='U') return true;
        else return false;   
    }
    string reverseVowels(string s) {
        int n = s.size();
        int i = 0;
        int j = n-1;
        while(i<j){
            if((isVowels(s[i])) && (!isVowels(s[j]))) j--;
            else if((!isVowels(s[i])) && (isVowels(s[j]))) i++;
            else if((isVowels(s[i])) && (isVowels(s[j]))){
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else {
                i++;
                j--;
            }
        }
        return s;
    }
};