class Solution {
public:
    int digitFrequencyScore(int n) {
        string s = to_string(n);
        // unordered_map<char,int>m;
        int sum = 0;
        for(int i = 0;i<s.size();i++){
            // m[s[i]]++;
            int num = s[i]-'0';
            sum+=num;
        }

        // }
        // int sum = 0;
        // for(auto x:m){
            
        // }
        return sum;
    }
};