#include <iostream>
#include <stdio.h>

using namespace std;

//Binary Search

int binarySearch(int arr[], int n, int x)
{

    int left = 0;
    int right = n - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] < x)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}

int main()
{

    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 40;
    int result = binarySearch(arr, n, x);
    if (result == -1)
        cout << "data not found!";
    else
        cout<<"Data is present in = "<<result<<" number index."<<endl;
    return 0;
}