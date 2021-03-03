#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
using ll = long long;

#define mx 10000
int ar[mx];
int tree[mx];

int read(int idx){
    int sum = 0;
    while (idx > 0){
        sum += tree[idx];
        idx -= (idx & -idx);
    }
    return sum;
}

void update(int idx, int val, int n){
    while (idx <= n){
        tree[idx] += val;
        idx += (idx & -idx);
    }
}

void print(int *ar, int n) {
    for (int i = 1; i <= n; ++i) {
        cout << ar[i] << " ";
    }
    puts("");
}

int main() {

    cout<<"Enter the size of array:";
    int n; cin >> n;
    for (int i = 1; i <= n; ++i) { cin >> ar[i]; update(i, ar[i], n); }

    cout << "input array:\t";
    print(ar, n);
    cout << "\n";

    cout << "tree array:\t";
    print(tree, n);
    cout << "\n";


    return 0;
}
