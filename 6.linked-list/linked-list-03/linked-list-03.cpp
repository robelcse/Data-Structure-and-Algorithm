#include<stdio.h>
#include<iostream>
using namespace std;
//Insert a Node at the begining of a linked-list

struct Node{
   int data;
   struct Node *link;
};

struct Node *head;

void print(){

    struct Node *temp;
    temp = head;
    while(temp !=NULL){
        printf("%d ",temp->data);
        temp = temp->link;
    }

    printf("\n");
}

void InsertNodeAtbegining(int value){
    struct Node *temp = (struct Node*) malloc(sizeof(struct Node));
    temp->data = value;
    temp->link = head;
    head = temp;
}

int main(){

  head = NULL;
  InsertNodeAtbegining(1);
  InsertNodeAtbegining(3);
  InsertNodeAtbegining(4);
   InsertNodeAtbegining(8);
  print();
  return 0;
}
