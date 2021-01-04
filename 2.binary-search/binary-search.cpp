#include<iostream>
using namespace std;

//Binary search

int binarySearch(int arr[], int n, int x){

         int left = 0;
         int right = n-1;
         while(left<=right){

                int mid = (left+right)/2;
                if(arr[mid] == x)
                      return mid;
                else if(arr[mid] < x)
                     left = mid+1;
                else
                    right = mid-1;
         }

    return -1;

}//end function


int main(){

    int arr[] = { 2, 3, 4, 10, 40 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 4;
    int result = binarySearch(arr, n, x);
    if(result == -1)
        cout<<"Data not found in the array!"<<endl;
    else
        cout<<"Data is present in = "<<result<<" number index."<<endl;
    return 0;
}
