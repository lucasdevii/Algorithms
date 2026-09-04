#include <stdlib.h>
#include <stdio.h>

typedef struct Node {
    struct Node* next;
    int value;
} Node;

Node* create(){
    Node* head = NULL;
    Node* current = NULL;

    for(int i = 0; i < 10; i++){
        Node* newNode = malloc(sizeof(Node));

        newNode->value = i * 3;
        newNode->next = NULL;

        if(head == NULL){
            head = newNode;
        }else{
            current->next = newNode;
        }

        current = newNode;
    }

    return head;
}

void printList(Node* node){
    Node* currentNode = node;

    while(currentNode != NULL){
        if(currentNode->next == NULL){ 
            printf(" %d", currentNode->value);
            return;
        }    

        printf(" %d ->", currentNode->value);

        currentNode = currentNode->next;
    }
}

int main(){
    Node *no = create();
    printList(no);

    return 0;
}



