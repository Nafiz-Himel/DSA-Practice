// problem links-> https://leetcode.com/problems/remove-duplicates-from-sorted-list/?envType=problem-list-v2&envId=linked-list&

struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode* tmp = head;

    while (tmp != NULL && tmp->next != NULL) {
        if (tmp->val == tmp->next->val) {
            tmp->next = tmp->next->next; 
        } else {
            tmp = tmp->next; 
        }
    }

    return head;
}