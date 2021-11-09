#include<iostream>
#include<stdio.h>

using namespace std;

//functoin for sort array
void selectionSort(int arr[], int n){
   
     for(int i = 0; i < n; i++){
        int min = i;
        for(int j = i+1; j < n; j++){
             if(arr[j]<arr[min]){
                 min = j;
             }

             if(min != i){

                 int temp = arr[i];
                 arr[i] = arr[min];
                 arr[min] = temp;
             }
        }
     }
}

/* Function to print an array */
void printArray(int arr[], int size)
{
	int i;
	for (i=0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}
int main(){


    int arr[] = {9, 13, 15, 11, 2};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << "Unsorted array: \n";
	printArray(arr, n);
    selectionSort(arr, n);
	cout << "Sorted array: \n";
	printArray(arr, n);
    return 0;
}