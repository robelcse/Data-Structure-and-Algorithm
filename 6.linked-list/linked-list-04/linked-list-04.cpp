#include<iostream>
#include<stdio.h>
using namespace std;

//delete node from linked-list
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

void deleteNode(int position){
   if(position == 1) {
          struct Node *temp;
         temp = head;
         head = head->link;
         free(temp);
   }else{
       struct Node *temp1;
       temp1 = head;
       for(int i = 1; i <= position-2; i++){
             temp1 = temp1->link;
       }
       struct Node *temp2;
       temp2 = temp1->link;
       temp1->link = temp2->link;
       free(temp2);
   }
}

int main(){

  head = NULL;
  InsertNodeAtbegining(10);
  InsertNodeAtbegining(4);
  InsertNodeAtbegining(3);
  InsertNodeAtbegining(1);
  InsertNodeAtbegining(6);
   cout<<"Before delete node from linked list:"<<endl;
  print();
  deleteNode(2);
  cout<<"After delete node from linked list:"<<endl;
   print();
  return 0;
}
