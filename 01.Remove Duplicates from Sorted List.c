//Problem link-> https://www.codechef.com/practice/course/linked-lists-new/LINKEDP04/problems/PREP55?tab=statement

struct Node* removeDuplicates(struct Node* head) {
    if (head == NULL) return NULL;

    struct Node* current = head; 


    while (current->next != NULL) {
        if (current->data == current->next->data) {
            struct Node* temp = current->next;
            current->next = current->next->next;
            free(temp);
        } else {
            current = current->next;
        }
    }

    return head; 
}