#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;

void display(Node *head){
    Node *temp=head;
    if(head==NULL){
        printf("List is empty\n");
        return;
    }
    else{
        do{
          printf("%d ->",temp->data);
          temp=temp->next;  
        } while (temp!=head);
        printf("Back to head\n");
    }
    return;
}

void Insertbeginning(int value, Node **head){
    Node *newnode=(Node*)malloc(sizeof(Node));
    if(*head==NULL){
        newnode->data=value;
        newnode->next=newnode;
        *head=newnode;
    }

    else{
        Node *temp=*head;
        while (temp->next!=*head){
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->data=value;
        newnode->next=*head;
    }
    return;
}

void Deletebeginning(Node **head){
    if(*head==NULL){
        printf("Empty list\n");
        return;
    }
    else if()
}


int main(){
    Node *head=NULL;

    Insertbeginning(10,&head);
    Insertbeginning(20,&head);
    Insertbeginning(30,&head);
    display(head);
    Deletebeginning(&head);
    return 0;
}