#include<iostream>
using namespace std;

//Bubble sort

void bubbleSort(int arr[], int n){

        int i, j, temp;
        for(i = 0; i < n-1; i++){
              for(j = 0; j< n-1-i; j++){
                   if(arr[j] > arr[j+1]){

                          temp = arr[j];
                          arr[j] = arr[j+1];
                          arr[j+1] = temp;

                   }
              }
        }
}

int main(){

    int arr[] = {22,14,12,18,9};
     int n = sizeof(arr) / sizeof(arr[0]),i;
     cout<<"Before sorting the array elements is:"<<endl;
     for(i = 0; i < n; i++){
           cout<<arr[i]<<endl;
     }

      bubbleSort(arr, n);
      cout<<"After sorting the array elements is:"<<endl;
      for(i = 0; i < n; i++){
           cout<<arr[i]<<endl;
     }

   return 0;

}
