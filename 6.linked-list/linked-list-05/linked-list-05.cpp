#include<iostream>
#include<stdio.h>
using namespace std;

//Insert Node in sorted order
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

void InsertNodeInSortedOrder(int value){
    struct Node *temp1 = (struct Node*) malloc(sizeof(struct Node));
    temp1->data = value;
    if(head == NULL || temp1->data < head->data){
            temp1->link = head;
            head = temp1;
    }else{
        struct Node *pred = head;
        struct Node *p = pred->link;
        while(p != NULL && temp1->data > p->data){
            pred = p;
            //cout<< p->data <<endl;
            p = p->link;
        }

        pred->link = temp1;
        temp1->link = p;
    }

}


int main(){

  head = NULL;
  InsertNodeInSortedOrder(4);
  InsertNodeInSortedOrder(10);
  InsertNodeInSortedOrder(13);
  print();
  InsertNodeInSortedOrder(12);
  print();
  return 0;
}
