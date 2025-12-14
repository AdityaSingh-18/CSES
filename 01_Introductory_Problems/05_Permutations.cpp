// Problem Link https://cses.fi/problemset/task/1070

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n;
    cin >> n;
    if(n == 2 || n == 3)    cout << "NO SOLUTION\n";
    else{
        for (int i = 2; i <= n; i += 2){
            cout << i << " ";
        }
        for (int i = 1; i <= n; i += 2){
            cout << i << " \n"[i == n || i == (n - 1)];
        }
    }
}