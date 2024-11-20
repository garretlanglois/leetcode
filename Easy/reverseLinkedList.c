#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* reverseList(struct ListNode* head) {
    
    struct ListNode* newEnd = malloc(sizeof(struct ListNode));
    newEnd->next = NULL;
    newEnd->val = head->val;

    struct ListNode tmp = *head->next;

    while (t)
    


}

void printList(struct ListNode* head) {
    struct ListNode* current = head;
    while (current != NULL) {
        printf("%d -> ", current->val);
        current = current->next;
    }
    printf("NULL\n");
}

int main(void) {

    // Create a simple linked list: 1 -> 2 -> 3 -> NULL
    struct ListNode* head = malloc(sizeof(struct ListNode));
    head->val = 1;
    head->next = malloc(sizeof(struct ListNode));
    head->next->val = 2;
    head->next->next = malloc(sizeof(struct ListNode));
    head->next->next->val = 3;
    head->next->next->next = NULL;

    printf("Original list:\n");
    printList(head);

    // Test reverseList
    struct ListNode* reversedHead = reverseList(head);

    printf("Reversed list:\n");
    printList(reversedHead);

    // Free memory (not strictly necessary for testing purposes)
    struct ListNode* temp;
    while (reversedHead != NULL) {
        temp = reversedHead;
        reversedHead = reversedHead->next;
        free(temp);
    }

    return 0;
}
