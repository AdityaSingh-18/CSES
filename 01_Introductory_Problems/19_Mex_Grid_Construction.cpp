// Problem Link https://cses.fi/problemset/task/3419

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int> (n , -1));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            vector<bool> used(2 * n, false);
            for (int k = 0; k < i; k++)     used[a[k][j]] = true;
            for (int k = 0; k < j; k++)     used[a[i][k]] = true;
            int x = 0;
            while(used[x])  x++;
            a[i][j] = x;
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << a[i][j] << " \n"[j == n - 1];
        }
    }
}