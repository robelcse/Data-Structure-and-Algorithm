#include<iostream>
using namespace std;

//linked list -02
//insert a node at the end of a linked list
struct Node{
    int data;
    struct Node *link;
};
struct Node *head;

void print(){

     struct Node *temp;
     temp = head;
     while(temp != NULL){
         printf("%d ", temp->data);
         temp = temp->link;
     }

     printf("\n");
}//end print function


void insertNodeAtEnd(int value){
   struct Node *temp = (struct Node*) malloc(sizeof(struct Node));
   temp->data = value;
   temp->link = NULL;

   if(head == NULL){
        head = temp;
   }else{
       struct Node *t;
       t = head;
       while(t->link != NULL){
            t = t->link;
       }
       t->link = temp;
   }
}//end insert node function

int main(){

  head = NULL;
  insertNodeAtEnd(1);
  insertNodeAtEnd(4);
  insertNodeAtEnd(5);
  insertNodeAtEnd(8);
  insertNodeAtEnd(2);
  print();

  return 0;
}//end main function
