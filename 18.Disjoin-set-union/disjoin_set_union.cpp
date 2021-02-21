#include<iostream>
using namespace std;
//disjoin set union data structure

#define MX 100
int parent[MX];


void makeSet(int u){
     //initilization code go here..
      parent[u] = u;
}

void init(){

     for(int i = 1; i <= 8; i++){
           makeSet(i);
     }
}

bool flag = false;

int Find(int u){

    if(flag == true){

          cout<<"Called with: "<< u <<endl;
    }

    if(u == parent[u]) return u;
    return parent[u] = Find(parent[u]);
}

void Union(int u, int v){
    int p = Find(u);
    int q = Find(v);
    if(p != q){
            parent[q] = p;
    }
}

bool isFriend(int u, int v){

        int p = Find(u);
        int q = Find(v);
        return (p == q);
}


int main(){

  init();
/*  for(int i = 1; i <= 8; i++){
        cout<<"parent of "<<i<<" is "<<parent[i]<<endl;
  } */

  /*
  Union(1,2);
  Union(2,3);
  Union(3,4);
  Union(4,5);
  Union(5,6);
  Union(6,7);
  Union(7,8);
 */


  Union(7,8);
  Union(6,7);
  Union(5,6);
  Union(4,5);
  Union(3,4);
  Union(2,3);
  Union(1,2);



   //cout<<Find(1)<<" "<<Find(8)<<endl;
 /*  if(isFriend(1,6)){
        cout<<"they are friend!";
   }else{
        cout<<"they are not friend!";
   } */

   flag = true;

   Find(8);
   cout<< "---------"<<endl;
   Find(8);
   cout<< "---------"<<endl;
   Find(8);


  return 0;
}
