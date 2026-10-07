#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head = NULL, *temp;
void create(){
    struct node *new;
    int choice;
    do{
       new = (struct node *)malloc(sizeof(struct node));
       printf("Enter data:");
       scanf("%d", &new -> data);
       new -> next = NULL;
       new -> prev = NULL;
       if(head == NULL){
        head = new;
       }else{
        temp =head;
        while(temp -> next != NULL){
            temp = temp -> next;
        }
        temp -> next = new;
        new -> prev = temp;
       }
       printf("Enter choice (1 or 0):");
       scanf("%d", &choice);
    }
    while(choice == 1);
}
void display(){
    temp = head;
    printf("doubly linked list:");
    while(temp != NULL){
        printf("%d -> ", temp -> data);
        temp = temp -> next;
    }
    printf("NULL");
}
int main(){
    create();
    display();
}