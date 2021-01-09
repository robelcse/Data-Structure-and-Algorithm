#include<iostream>
using namespace std;

//linked list -01
//create a node ,link with another node and print
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

}

int main(){

  head = NULL;
  head = (struct Node*) malloc(sizeof(struct Node));
  head->data = 2;
  head->link = (struct Node*) malloc(sizeof(struct Node));
  head->link->data = 5;
  head->link->link = NULL;
  print();

  return 0;
}
