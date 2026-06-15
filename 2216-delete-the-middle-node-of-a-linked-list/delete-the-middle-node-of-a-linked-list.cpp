class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head == NULL || head->next==NULL) return NULL;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next->next && fast->next->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* a = slow->next->next;
        slow -> next = NULL;
        slow -> next = a;
        return head;
    }
};