#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head = NULL;
void insertbegin(){
    struct node *new;
    int choice;
    do{
        new = (struct node*)malloc(sizeof(struct node));
        printf("Enter data:");
        scanf("%d", &new -> data);
        new -> next = head;
        head = new;
        printf("Enter choice (0 or 1):");
        scanf("%d", &choice);
    }while(choice == 1);
}
void display(){
    struct node *temp = head;
    printf("\nSingly Linked list:");
    while(temp != NULL){
        printf("%d -> ",temp->data);
        temp = temp -> next;
    }
    printf("NULL\n");
}
int main(){
    insertbegin();
    display();
}