#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void vnesi(Node** head, int data) {
    Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        Node* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

void printList(Node* head) {
    printf("List: ");
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortOpagjanje(Node* head) {
    int swapped;
    Node* current;
    Node* last = NULL;

    do {
        swapped = 0;
        current = head;

        while (current->next != last) {
            if (current->data < current->next->data) {
                swap(&(current->data), &(current->next->data));
                swapped = 1;
            }
            current = current->next;
        }
        last = current;
    } while (swapped);
}

void sortRastenje(Node* head) {
    int swapped;
    Node* current;
    Node* last = NULL;

    do {
        swapped = 0;
        current = head;

        while (current->next != last) {
            if (current->data > current->next->data) {
                swap(&(current->data), &(current->next->data));
                swapped = 1;
            }
            current = current->next;
        }
        last = current;
    } while (swapped);
}

void brisi(Node** head, int key) {
    Node* temp = *head;
    Node* prev = NULL;

    if (temp != NULL && temp->data == key) {
        *head = temp->next;
        free(temp);
        return;
    }

    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Element not found.\n");
        return;
    }

    prev->next = temp->next;
    free(temp);
}

int main() {
    Node* head = NULL;

    vnesi(&head, 5);
    vnesi(&head, 3);
    vnesi(&head, 8);
    vnesi(&head, 1);
    vnesi(&head, 6);

    printf("Pochetna lista:\n");
    printList(head);

    sortOpagjanje(head);
    printf("Listata vo opagjachki redosled:\n");
    printList(head);

    sortRastenje(head);
    printf("Listata vo rastechki redosled:\n");
    printList(head);

    brisi(&head, 3);
    printf("Listata otkako beshe izbrishan elementot so vrednost 3:\n");
    printList(head);

    return 0;
}
