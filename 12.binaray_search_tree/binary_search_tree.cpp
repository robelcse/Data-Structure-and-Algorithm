#include<stdio.h>
#include<iostream>
//binary search tree implementation (pre-order,in-order,post-order)

using namespace std;

struct Node{

      int data;
      struct Node *left;
      struct Node *right;

};

struct Node *root;

void insert(int value){

        struct Node *newNode = (struct Node*) malloc(sizeof(struct Node));
        newNode->data = value;
        newNode->left = NULL;
        newNode->right = NULL;

        if(root == NULL){
               root = newNode;
        }else{
              struct Node *temp = root;
              while(1){
                    if(newNode->data <= temp->data){
                          //left
                          if(temp->left == NULL){
                                   temp->left = newNode;
                                   break;
                          }else{
                                  temp = temp->left;
                          }
                    }else{
                         //right
                         if(temp->right == NULL){
                               temp->right = newNode;
                               break;
                         }else{
                               temp = temp->right;
                         }
                    }//end else
              }//end while

        }//end else

}//insert function

//pre-order traversal

void preOrder(struct Node *r){
      if(r == NULL) return;
      printf("%d ", r->data); //root print
      preOrder(r->left); //left visit
      preOrder(r->right); //right visit
}

//in-order traversal

void inOrder(struct Node *r){
      if(r == NULL) return;
      inOrder(r->left); //left visit
      printf("%d ", r->data);
      inOrder(r->right); //right visit
}

//post-order

void postOrder(struct Node *r){
      if(r == NULL) return;
      postOrder(r->left); //left visit
      postOrder(r->right); //right visit
      printf("%d ", r->data);
}

int main(){

     root = NULL;
     insert(55);
     insert(40);
     insert(80);
     insert(34);
     insert(60);
     insert(90);
     insert(28);
     insert(38);
     printf("Preorder traversal:\n");
     preOrder(root);
     printf("\n");
     printf("Inorder traversal:\n");
     inOrder(root);
     printf("\n");
     printf("Postorder traversal:\n");
     postOrder(root);
     return 0;

}//end main function
