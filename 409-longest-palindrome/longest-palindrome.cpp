class Solution {
public:
    int longestPalindrome(string s) {
        // method 1
        // int n = s.size();
        // unordered_map<int,int>m;
        // for(int i = 0;i<n;i++){
        //     m[s[i]]++;
        // }
        // int count = 0;
        // bool odd = 0;
        // for(auto x:m){
        //     if(x.second%2==0){
        //         count+=x.second;
        //     }
        //     else{
        //         odd = 1;
        //         count+=x.second-1;
        //     }
        // }
        // return count+odd;

        // method 2

        int n = s.size();
        vector<int>lower(26,0),upper(26,0);
        int count = 0;
        bool odd = 0;
        for(int i = 0;i<n;i++){
            if(s[i]>='a') lower[s[i]-'a']++;
            else upper[s[i]-'A']++;
        }
        for(int i = 0;i<26;i++){
            if(lower[i]%2==0 ) {
                count+=lower[i];
            }
            else {
                odd = 1;
                count+=lower[i]-1;
            }
            if(upper[i]%2==0) {
                count+=upper[i];
            }
            else {
                odd = 1;
                count+=upper[i]-1;
            }
        }
        return count+odd;
    }
};