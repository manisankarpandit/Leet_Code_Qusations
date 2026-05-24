class Solution {
public:
    bool canConstruct(string a, string b) {
        int n = a.size();
        int m = b.size();
        unordered_map<char,int>m1,m2;
        for(int i = 0;i<n;i++){
            m1[a[i]]++;
        }
        for(int i = 0;i<m;i++){
            m2[b[i]]++;
        }
        for(auto x:m1){
            if(m2.find(x.first)==m2.end()) return false;
            if(m2[x.first]<x.second) return false;
        }
        return true;
    }
};