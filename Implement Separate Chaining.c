#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insert(struct Node* hash[], int key, int hashSize) {
    int index = key % hashSize;

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = key;
    newNode->next = hash[index];
    hash[index] = newNode;
}

void printHash(struct Node* hash[], int hashSize) {
    for(int i = 0; i < hashSize; i++) {
        struct Node* temp = hash[i];
        while(temp) {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}
