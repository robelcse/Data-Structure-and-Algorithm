#include<iostream>
#include<stdio.h>
using namespace std;

//DFS implementation in c++
int adj[100][100];
int color[100];
int node,edge;

#define WHITE 1
#define GRAY 2
#define BLACK 3

void dfsVisit(int x){
    printf("%d \t", x);
    color[x] = GRAY;
    for(int i = 0; i < node; i++){
         if(adj[x][i] == 1){
                if(color[i] == WHITE){
                    dfsVisit(i);
                }
         }

         color[x] = BLACK;
    }


}//end dfsvisit

void dfs(){

       for(int i = 0; i < node; i++){
             color[i] = WHITE;
       }
       for(int i = 0; i < node; i++){
            if(color[i] == WHITE){
                   dfsVisit(i);
            }
       }

}//end dfs

int main(){

   freopen("input.txt","r", stdin);
   scanf("%d",&node);
   scanf("%d", &edge);
   int n1,n2;
   for(int i = 0; i < edge; i++){
          scanf("%d %d",&n1, &n2);
          adj[n1][n2] = 1;
          adj[n2][n1] = 1;
   }

   dfs();

  return 0;
}
