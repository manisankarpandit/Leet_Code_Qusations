class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        int n = s.length();
        vector<int>arr;
        for(int i = 0; i < n; i++){
            int a = s[i] - '0';
            arr.push_back(a);
        }
        int count = 0;
        for(int i = 1;i<arr.size();i++){
            if(abs(arr[i]-arr[i-1]) <=2) count++;
        }
        if(count+1 == arr.size()) return true;
        return false;
    }
};