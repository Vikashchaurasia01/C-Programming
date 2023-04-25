#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *head, *ptr;
struct node* DelAfter(struct node* head){
    int position = 2, pos = 1;
    struct node *ptr, *temp;
    ptr = head;
    temp = head;
    while(pos < position){
        temp = temp -> next;
        ptr = temp;
        pos++;
    }
    temp = temp -> next;
    ptr -> next = temp -> next;
    free(temp);
    temp = NULL;
    temp = head;
}
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
    head = DelAfter(head);
    current = head;
    while(current != NULL){
        printf("%d ",current -> data);
        current = current -> next;
    }

    // int n,pos,position = 1;
    // head = (struct node*)malloc(sizeof(struct node));
    // ptr = head;
    // printf("Enter the data u want to insert: ");
    // scanf("%d ",head -> data);
    // head -> prev = NULL;
    // //head -> data = data;
    // head -> next = NULL;

    // struct node *current = malloc(sizeof(struct node));
    // printf("\nEnter the number of data u want to insert: ");
    // scanf("%d",&n);
    // int i;
    // for(i=1; i<n; i++){
    //     printf("\nEnter the data you want to insert at pos %d: ",i+1);
    //     scanf("%d",current -> data);
    //     current -> prev = ptr;
    //     current -> next = NULL;
    //     //current -> data = data;
    //     ptr -> next = current;
    // }
    // ptr = head;
    // while(ptr != NULL){
    //     printf("%d ",&ptr -> data);
    //     ptr = ptr -> next;
    // }

}