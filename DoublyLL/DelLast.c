#include<stdio.h>
#include<stdio.h>

struct node{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *head;
void delLast(){
    struct node *temp, *ptr = head;
    if(head == NULL)
        printf("List is empty: ");
    // else if(head -> next == NULL)
    //     delBeg();
    else{
        while(ptr != NULL){
            
            ptr = ptr -> next;
            temp = ptr;
        }
        temp -> next = NULL;
        free(ptr);
        ptr = NULL;
    }
}

int main(){
    struct node *head = NULL;
    head = (struct node*)malloc(sizeof(struct node));
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
    temp = (struct node*)malloc(sizeof(struct node));
    temp -> prev = current;
    current -> next = temp;
    temp -> data = 7;
    temp -> next = NULL;

    current = temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp -> prev = current;
    current -> next = temp;
    temp -> data = 8;
    temp -> next = NULL;

    current = head;

    printf("List before deletion: \n");
    while(current != NULL){
        printf("%d ",current -> data);
        current = current -> next;
    }
    delLast();

    current = head;

    printf("\nList after deletion: \n");
    while(current != NULL){
        printf("%d ",current -> data);
        current = current -> next;
    }

}