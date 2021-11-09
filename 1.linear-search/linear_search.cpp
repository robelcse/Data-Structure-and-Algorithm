#include<iostream>
using namespace std;

/*
 Linear search algorithm
*/

int main(){

  int n,  i, s_data;
  bool found = true;

  cout<<"Please enter the size of array:"<<endl;
  cin>>n;
  int arr[n];
  cout<<"Please enter the elements of array:"<<endl;
  for(i = 0; i < n ; i++){
       cin>>arr[i];
  }

  cout<<"please enter the data which you want to search:"<<endl;
  cin>>s_data;

 for(i = 0; i < n ; i++){
        if(arr[i] == s_data){
              cout<<"the index is : "<<i<<" "<<"and data is :"<<arr[i]<<endl;
              found = false;
              break;
        }
  }

  if(found){
       cout<<"Data not found!";
  }

  return 0;
}
