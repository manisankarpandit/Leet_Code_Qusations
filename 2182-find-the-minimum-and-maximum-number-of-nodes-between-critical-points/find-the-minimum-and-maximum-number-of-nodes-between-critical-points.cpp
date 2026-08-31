class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* a = head;
        ListNode* b = head->next;
        ListNode* c = head->next->next;
        if (c == NULL) return {-1, -1};
        int fidx = -1, sidx = -1;
        int idx = 1;
        int mindis = INT_MAX;
        int f = -1, s = -1;
        while (c) {
            if ((b->val > a->val && b->val > c->val) ||
                (b->val < a->val && b->val < c->val)) {
                // for max dis
                if (fidx == -1) fidx = idx;
                else sidx = idx;
                // for min dis
                f = s;
                s = idx;
                if (f != -1) {
                    int d = s - f;
                    mindis = min(mindis, d);
                }
            }
            a = a->next;
            b = b->next;
            c = c->next;
            idx++;
        }
        if (sidx == -1) return {-1, -1};
        int maxdis = sidx - fidx;
        return {mindis, maxdis};
    }
};