
// C

#include <stdio.h>
#include<stdlib.h>

struct node {
    int value;
    struct node *next;
};

typedef struct node Node;

Node * createNode(int val){
    Node * newNode = malloc(sizeof(Node));
    newNode->value = val;
    newNode->next = NULL;
    return newNode;
}

Node * createListFromArray(int arr[], int arrSize){
    Node * rootNodePtr = createNode(arr[0]);
    Node * lastNodePtr = rootNodePtr;
    
    for (int i =1; i<arrSize; i++){
        Node * nodePtr = createNode(arr[i]);
        lastNodePtr->next = nodePtr;
        lastNodePtr = lastNodePtr->next;
    }
    
    return rootNodePtr;
}

void Printlist(Node * head){
    printf("List:\n");
    while(head != NULL){
        printf("%d", head->value);
        head = head->next;
    }
    printf("\n");
}

void rearrange(Node * head){
    Node * p, * q;
    p = head->next;
    q = malloc(sizeof(Node));
    q->value = 6;
    q->next = p->next;
    p->next = q;
}

int length(Node * head){
    int result = 0;
    for(Node * curr = head; curr != NULL; curr = curr->next){
        result++;
        
    }
    return result;
}


int main()
{
    int arr[] = {1,2,3};
    Node * head = createListFromArray(arr, sizeof(arr)/sizeof(int));
    
    Printlist(head);
    rearrange(head);
    Printlist(head);
}