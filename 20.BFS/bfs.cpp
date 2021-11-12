#include<stdio.h>
#include<iostream>
#include<queue>

using namespace std;

#define WHITE 1
#define GRAY 2
#define BLACK 3
#define INT_MIN -2147483648

int adj[100][100];
int color[100];
int parent[100];
int dis[100];
int node, edge;

void bfs(int startingNode){
     for(int i = 0; i < node; i++){
           color[i] = WHITE;
           dis[i] = INT_MIN;
           parent[i] = -1;
     }

     dis[startingNode] = 0;
     parent[startingNode] = -1;

     queue <int> q;
     q.push(startingNode);
     while(! q.empty()){
          int x;
          x = q.front();
          q.pop();
          color[x] = GRAY;
          printf("%d\t", x);

          for(int i = 0; i < node; i++){
                if(adj[x][i] == 1){
                      if(color[i] == WHITE){
                            //x er neighbor hosse i
                            // x number node ta hosse i number node er parent
                            dis[i] = dis[x]+1;
                            parent[i] = x;
                            q.push(i);
                      }//
                }//
          }//end for

          color[x] = BLACK;
     }
}//end bfs


int main(){

   freopen("input.txt","r",stdin);
   scanf("%d %d", &node, &edge);
   int n1,n2;
   for(int i = 0; i < edge; i++){
         scanf("%d %d", &n1, &n2);
         adj[n1][n2] = 1;
          adj[n2][n1] = 1;
   }

   bfs(0);
   printf("\n %d ",parent[5]);
   printf("\n %d ",parent[6]);
   printf("\n");

   return 0;
}//end main function
