#include <stdio.h>
#include <stdlib.h>

struct node {


    int data1;
    int data2;
    struct node *link;
};


int countnodes(struct node *head){
    int count=0;
    struct node *check = head;     //tesst pointer initialized to head.

    while(check !=NULL){          //check if we have found the end
        count++;
        check=check->link;       //decend check will point to the second node now and so on.
    }

    printf("%d",count);
}


void add_at_end(struct node *head, int data){

    struct node *check = head;     //tesst pointer initialized to head.
    struct node *temp = (struct node*)malloc(sizeof(struct node));

    temp -> data1= data;
    temp -> link = NULL;

    while(check !=NULL){          //check if we have found the end
        check=check->link;       //decend check will point to the second node now and so on.
    }

    check -> link = temp;
}


int main(){

struct node  *head = (struct node *)malloc(sizeof(struct node));                       // pointer to 1st node struct node and allocate memory 
head -> data1 =45;
head -> link = NULL;

struct node  *point = (struct node *)malloc(sizeof(struct node));                       // pointer to 2nd node struct node and allocate memory 
head -> data1 =60;
point -> link = NULL;
head -> link = point;

point = (struct node *)malloc(sizeof(struct node));                                      // same pointer used to allocate memory for 3rd node
head -> data1 =80;
point -> link = NULL;
head -> link -> link = point;                                                           // store the address of the 3rd node in the link of the 2nd node 

point = (struct node *)malloc(sizeof(struct node));  
head -> data1 =100;
point -> link = NULL;
head -> link -> link -> link = point;  



//stack

struct node  *newnode = (struct node *)malloc(sizeof(struct node));                       // pointer to 2nd node struct node and allocate memory 



countnodes(head);
}

