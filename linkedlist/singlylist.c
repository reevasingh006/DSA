#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node*next;
};
struct node *head = NULL,*temp;
void create(){
    struct node *new;
    int i,n;
    printf("Enter no. of data to enter:");
    scanf("%d", &n);
    printf("Enter elements in linked list:");
    for(i=0; i<n; i++){
        new = (struct node *)malloc(sizeof(struct node));
        scanf("%d",&new -> data);
        new -> next = NULL;
        if(head == NULL){
            head = new;
            temp = new;
        }else{
            temp -> next = new;
            temp = new;
        }
    }
}
void display(){
    temp = head;
    while(temp != NULL){
        printf("%d -> ", temp -> data);
        temp = temp -> next;
    }
    printf("NULL\n");
}
int main(){
    create();
    display();
    return 0;
}