#include<iostream>
using namespace std;

bool marked[30];
void sieve(int n) {
  for (int i = 2; i < n; i++) {
    if (marked[i] == false) { // i is a prime
      for (int j = i + i; j <= n; j += i) {
        marked[j] = true;
      }
    }
  }


}

bool isPrime(int n) {
  if (n < 2) return false;
  return marked[n] == false;
}

int main(){

   int n = 30;
   sieve(n);
   for(int i = 0; i <n; i++){
          cout<<marked[i]<<" ";
    }

    cout<<endl;


    bool result = isPrime(11);
    cout<<result;


     return 0;
}
