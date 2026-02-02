#include<stdio.h>
#include<stdlib.h>


// Doubly linked list of heap allocated strings


typedef struct Node {
        int data;
        struct Node* prev;
        struct Node* next;
    } Node;

Node* createNode(int data)
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

void insertAtBeginning(Node** head, int data) //Double pointer is used here since head is passed by value, and we need to change where the pointer is pointing, we can't do this without passing the pointer by reference
{
    Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    newNode->next = *head;
    (*head)->prev = newNode;
    *head = newNode;
}

int main() {
    return 0;    
}