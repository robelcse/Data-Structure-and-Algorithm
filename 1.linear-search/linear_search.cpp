#include <iostream>
using namespace std;

/*
  Linear search algorithm
*/
void linearSearch(int arr[], int number)
{

     bool found = true;
     for (int i = 0; i < 6; i++)
     {

          if (arr[i] == number)
          {

               printf("data found:%d\n", i);
               found = false;
          }
     }

     if (found)
     {

          printf("data not found!");
     }
}

int main()
{

     int arr[5];
     int number;
     cout << "Please enter 6 elements of array:" << endl;
     for (int i = 0; i < 6; i++)
     {
          cin >> arr[i];
     }
     cout << "Please enter an element to search:" << endl;
     cin >> number;

     linearSearch(arr, number);

     return 0;
}