class Solution {
public:
    ListNode* middleNode(ListNode* head) {

        ListNode* t = head;
        ListNode* r = head;

        while(r != NULL && r->next != NULL) {

            t = t->next;
           r = r->next->next;
        }

        return t;
    }
};