class Solution {
public:
    int numJewelsInStones(string j, string s) {
        int n = j.size();
        int m = s.size();
        unordered_map<char,int>m1,m2;
        for(int i = 0;i<n;i++){
            m1[j[i]]++;
        }
        for(int i = 0;i<m;i++){
            m2[s[i]]++;
        }
        int count = 0;
        for(auto x:m2){
            if(m1.find(x.first)!=m1.end()){
                count+=x.second;
            }
        }
        return count;
    }
};