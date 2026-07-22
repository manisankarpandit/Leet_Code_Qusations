class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        if (matrix.empty() || matrix[0].empty())
            return result;
        int m = matrix.size();
        int n = matrix[0].size();
        int minc = 0;
        int maxc = n - 1;
        int minr = 0;
        int maxr = m - 1;
        while (minr <= maxr && minc <= maxc) {
            for (int i = minc; i <= maxc; i++) {
                result.push_back(matrix[minr][i]);
            }
            minr++;
            if (minr > maxr || minc > maxc)
                break;
            for (int i = minr; i <= maxr; i++) {
                result.push_back(matrix[i][maxc]);
            }
            maxc--;
            if (minr > maxr || minc > maxc)
                break;
            for (int i = maxc; i >= minc; i--) {
                result.push_back(matrix[maxr][i]);
            }
            maxr--;
            if (minr > maxr || minc > maxc)
                break;
            for (int i = maxr; i >= minr; i--) {
                result.push_back(matrix[i][minc]);
            }
            minc++;
            if (minr > maxr || minc > maxc)
                break;
        }
        return result;
    }
};