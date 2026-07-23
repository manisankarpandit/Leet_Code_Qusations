class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        // sort(arr1.begin(),arr.end());
        unordered_map<int,int>mp;
        int n = arr1.size();
        int m = arr2.size();
        // int i = 0, j = 0;
        for(int  i = 0;i<n;i++){
            mp[arr1[i]]++;
        }
        vector<int>res;
        for(int i = 0;i<m;i++){
            if(mp.find(arr2[i])!=mp.end()){
                int a = mp[arr2[i]];
                while(a--){
                    res.push_back(arr2[i]);
                }
                mp.erase(arr2[i]);  
            }
        }
        vector<int> temp;
        for (auto &x : mp) {
            while (x.second--) {
                temp.push_back(x.first);
            }
        }
        sort(temp.begin(), temp.end());
        for (int x : temp) {
            res.push_back(x);
        }
        return res;
    }
};