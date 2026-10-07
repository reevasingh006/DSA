#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head= NULL,*temp;
void insertend(){
    struct node *new;
    int choice;
    do{
        new = (struct node *)malloc(sizeof(struct node));
        printf("Enter data:");
        scanf("%d", &new -> data);
        if(head == NULL){
            head = new;
        }else{
            temp = head;
            while(temp -> next != NULL){
                temp = temp -> next;
            }
            temp -> next = new;
        }
        printf("Enter choice (0 or 1):");
        scanf("%d", &choice);
    }
    while(choice == 1);
}
void display(){
    temp = head;
    printf("Linked list:");
    while(temp != NULL){
        printf("%d -> ",temp -> data);
        temp = temp -> next;
    }
    printf("NULL");
}
int main(){
    insertend();
    display();
}