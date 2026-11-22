class Solution {
public:
    bool areNumbersAscending(string s) {
        int n = s.size();
        stringstream ss(s);
        string word;
        vector<int> nums;
        while (ss >> word) {
            if (isdigit(word[0])) {
                nums.push_back(stoi(word));
            }
        }
        int count = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i - 1] < nums[i]) count++;
            else count--;
        }
        if (count+1==nums.size()) return true;
        else return false;
    }
};