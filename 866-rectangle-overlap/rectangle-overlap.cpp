class Solution {
public:
    bool isRectangleOverlap(vector<int>& r1, vector<int>& r2) {
        int ax1 = r1[0], ay1 = r1[1] , ax2 = r1[2] , ay2 = r1[3];
        int bx1 = r2[0], by1 = r2[1] , bx2 = r2[2] , by2 = r2[3];
        // int overlap_area = (min(ax2,bx2)-max(ax1,bx1))*(min(ay2,by2)-max(ay1,by1));
        if(ax2>bx1 && ax1<bx2 && ay2>by1 && ay1<by2) return true;
        return false;
    }
};