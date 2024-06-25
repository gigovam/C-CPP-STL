#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int broj;
    char karakter;
    struct Node *next;
} Node;

void insert(Node **head, int broj, char karakter) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->broj = broj;
    newNode->karakter = karakter;
    newNode->next = *head;
    *head = newNode;
}

void pecatiListaNanazad(Node *head) {
    if (head == NULL) {
        return;
    }
    pecatiListaNanazad(head->next);
    printf("Broj: %d, Karakter: %c\n", head->broj, head->karakter);
}

int main() {
    Node *head = NULL;

    insert(&head, 1, 'A');
    insert(&head, 2, 'B');
    insert(&head, 3, 'C');
    insert(&head, 4, 'D');

    pecatiListaNanazad(head);

    return 0;
}








