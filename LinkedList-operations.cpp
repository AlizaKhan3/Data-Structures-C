#include <iostream>
#include <cstdlib>

struct Node {
    int data;
    struct Node* next;
};


void DisplayLinkedList(struct Node* ptr) {
    while (ptr != NULL) {
        std::cout << "Element: " << ptr->data << std::endl;
        ptr = ptr->next;
    }
}

struct Node* insertAtBeginning(struct Node* head, int newdata) {
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = newdata;
    return ptr;
}

struct Node* insertInBetween(struct Node* head, int newdata, int index) {
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node* p = head;
    int i = 0;
    while (i < index - 1 && p != NULL) {
        p = p->next;
        i++;
    }
    if (p == NULL) return head; // If index is out of bounds
    ptr->data = newdata;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

struct Node* insertAtEnd(struct Node* head, int data) {
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node* p = head;
    while (p->next != NULL) {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    ptr->data = data;
    return head;
}

struct Node* deletionFirstNode(struct Node* head) {
    struct Node* ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

struct Node* deletionInBetween(struct Node* head, int index) {
    struct Node* p = head;
    struct Node* q = head->next;
    int i = 0;
    while (i < index - 1 && q != NULL) {
        p = p->next;
        q = q->next;
        i++;
    }
    if (q == NULL) return head; 
    p->next = q->next;
    free(q);
    return head;
}

struct Node* deletionInEnd_Append(struct Node* head) {
    struct Node* p = head;
    struct Node* q = p->next;
    while (q->next != NULL) {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}

int main() {
    struct Node* head;
    struct Node* second;
    struct Node* third;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data = 14;
    second->next = third;

    third->data = 28;
    third->next = NULL;

    std::cout << "Before any operation:" << std::endl;
    DisplayLinkedList(head);

    
    head = insertAtBeginning(head, 3);
    head = insertInBetween(head, 10, 2);
    head = insertAtEnd(head, 80);

    std::cout << "\nAfter insertion operations:" << std::endl;
    DisplayLinkedList(head);

    head = deletionFirstNode(head);
    head = deletionInBetween(head, 2);
    head = deletionInEnd_Append(head);

    std::cout << "\nAfter deletion operations:" << std::endl;
    DisplayLinkedList(head);

    return 0;
}
