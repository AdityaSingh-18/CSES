// Problem Link https://cses.fi/problemset/task/2165

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void towerOfHanoi(int n, int s, int m, int d){
    if(n == 1){
        cout << s << " " << d << "\n";
        return;
    }
    towerOfHanoi(n - 1, s, d, m);
    cout << s << " " << d << "\n";
    towerOfHanoi(n - 1, m, s, d);
}

int main(){
    int n;
    cin >> n;
    cout <<  (1 << n) - 1 << "\n";
    towerOfHanoi(n, 1, 2, 3);
}