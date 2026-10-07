#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head = NULL, *temp;
void create(){
    struct node *new;
    int choice;
    do{
        new = (struct node *)malloc(sizeof(struct node));
        printf("Enter data:");
        scanf("%d",&new -> data);
        new -> next = NULL;
        new -> prev = NULL;
        if(head == NULL){
            head = new;       
        }else{
            temp = head;
            while(temp != NULL){
                temp = temp -> next;
            }
        }
    }
}