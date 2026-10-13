// problem link-> https://leetcode.com/problems/remove-linked-list-elements/?envType=problem-list-v2&envId=linked-list

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    if (head == NULL)
        return NULL;

    struct ListNode* tmp = head;

    while (tmp->next != NULL) {
        if (tmp->next->val == val) {
            tmp->next = tmp->next->next;
        } else {
            tmp = tmp->next;
        }
    }

    if(head->val == val){
        head = head->next;
    }

    return head;
}