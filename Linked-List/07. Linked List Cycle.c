// problem links-> https://leetcode.com/problems/linked-list-cycle/?envType=problem-list-v2&envId=linked-list
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    if (head == NULL || head->next == NULL) {
        return false;
    }
    
    struct ListNode *slow = head;
    struct ListNode *fast = head;
    
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;          
        fast = fast->next->next;    
        
        if (slow == fast) {
            return true; // Cycle detected
        }
    }
    
    return false; 
}