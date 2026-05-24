class Solution {
public:
    int longestPalindrome(string s) {
        int n =s.size();
        unordered_map<int,int>m;
        for(int i = 0;i<n;i++){
            m[s[i]]++;
        }
        int count = 0;
        bool odd = 0;
        for(auto x:m){
            if(x.second%2==0){
                count+=x.second;
            }
            else{
                odd = 1;
                count+=x.second-1;
            }
        }
        return count+odd;
    }
};