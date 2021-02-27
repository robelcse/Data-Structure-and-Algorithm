#include<iostream>
#include<stdio.h>
#include<stack>
#include<vector>

using namespace std;


#define WHITE 1
#define GRAY 2
#define BLACK 3

int adj[100][100], color[100], startingTime[100], finishingTime[100], node, edge, Time = 1;
stack <int> ans;

void dfsVisit(int x){
      printf("%d ",x);
      startingTime[x] = Time++;
      color[x] = GRAY;
      for(int i = 0; i < node; i++){
           if(adj[x][i] == 1){
                if(color[i] == WHITE){

                        dfsVisit(i);
                }
           }
      }

      color[x] = BLACK;
      finishingTime[x] = Time++;
      ans.push(x);

}//end dfs

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

   freopen("input.txt","r",stdin);
   scanf("%d %d", &node, &edge);
   int n1,n2;
   for(int i = 0; i < edge; i++){
         scanf("%d %d", &n1, &n2);
         adj[n1][n2] = 1;
   }

   dfs();

    printf("after topological sort the element are:");
    while(! ans.empty()){

              cout<<ans.top()<<" ";
              ans.pop();
    }

    cout<<endl;

   return 0;
}//end main function





