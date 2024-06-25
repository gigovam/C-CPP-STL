#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Node{
    char *zbor;
    struct Node *nextPtr;
};
typedef struct Node Node;
typedef Node *NodePtr;

void push(NodePtr *head, char *zbor);
void pop(NodePtr *head);

int main()
{
    NodePtr ptr = NULL;
    char rechenica[100];
    char *str;
    printf("Vnesi rechenica:\n");
    gets(rechenica);
    str = strtok(rechenica, " ");
    while(str!=NULL) {
        push(&ptr, str);
        str = strtok(NULL, " ");
    }

    pop(&ptr);
    return 0;
}

void push(NodePtr *head, char *zbor) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->zbor=zbor;
    newNode->nextPtr=*head;
    *head=newNode;
}

void pop(NodePtr *head) {
    while(*head!=NULL) {
        NodePtr temp = *head;
        printf("%s ", temp->zbor);
        *head=(*head)->nextPtr;
        free(temp);
    }
}











