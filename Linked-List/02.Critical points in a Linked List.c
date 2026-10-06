// problem link-> https://www.codechef.com/practice/course/linked-lists-new/LINKEDP04/problems/CRITLIST

int countCriticalPoints(struct ListNode* head) {
    if (head == NULL || head->next == NULL || head->next->next == NULL) {
        return 0;
    }

    struct ListNode *tmp_1 = head;
    struct ListNode *tmp_2 = head->next;
    int count = 0;


    while (tmp_2->next != NULL) {

        if (tmp_1->val > tmp_2->val && tmp_2->val < tmp_2->next->val) {
            count++;
        }
        else if (tmp_1->val < tmp_2->val && tmp_2->val > tmp_2->next->val) {
            count++;
        }
        

        tmp_1 = tmp_2;
        tmp_2 = tmp_2->next;
    }
    
    return count;
}