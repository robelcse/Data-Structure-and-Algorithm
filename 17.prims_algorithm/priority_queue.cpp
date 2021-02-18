#include<iostream>
#include<queue>
 using namespace std;

 //proitiry queue in c++
/*
 void showpq(priority_queue <int> qq){
      priority_queue <int> q = qq;
      while( ! q.empty()){

            cout<< '\t' << q.top();
            q.pop();
      }

      cout << '\n';
 }
*/

 void showpq(priority_queue <int, vector<int>, greater<int> > qq){
      priority_queue <int, vector<int>, greater<int> > q = qq;
      while( ! q.empty()){

            cout<< '\t' << q.top();
            q.pop();
      }

      cout << '\n';
 }

 int main(){

   //priority_queue <int> qquize;
   priority_queue <int, vector<int>, greater<int> > qquize;


         qquize.push(10);
         qquize.push(30);
         qquize.push(20);
         qquize.push(5);
         qquize.push(1);

         cout<<"the priority qquize quize is: ";
         showpq(qquize);

         cout<< "\nqquize.size() : " << qquize.size();
         cout<<"\nqquize.top() : " << qquize.top();

         cout<< "\nqquize.pop() : ";
         qquize.pop();
         showpq(qquize);



   return 0;
 }
