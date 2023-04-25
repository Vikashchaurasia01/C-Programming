#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node *prev;
    int data;
    struct node *next;
};

int main(){
    struct node *head = NULL;
    head = malloc(sizeof(struct node));
    head -> prev = NULL;
    head -> data = 5;
    head -> next = NULL;

    struct node *current = malloc(sizeof(struct node));
    current -> prev = head;
    head -> next = current;
    current -> data = 6;
    current -> next = NULL;

    struct node *temp;
    temp = current;
    temp = malloc(sizeof(struct node));
    temp -> prev = current;
    current -> next = temp;
    temp -> data = 7;
    temp -> next = NULL;

    current = temp;
    temp = malloc(sizeof(struct node));
    temp -> prev = current;
    current -> next = temp;
    temp -> data = 8;
    temp -> next = NULL;

    current = head;

    while(current != NULL){
        printf("%d ",current -> data);
        current = current -> next;
    }

}