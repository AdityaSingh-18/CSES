// Problem Link https://cses.fi/problemset/task/3311

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<char>> a(n, vector<char> (m));
    string b = "ABCD";
    for (int i = 0; i < n; i++){
        for (int j= 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            int k = 0;
            while(a[i][j] == b[k] || (i > 0 ? a[i - 1][j] == b[k] : false) || (j > 0 ? a[i][j - 1] == b[k] : false)){
                k++;
            }
            a[i][j] = b[k];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << a[i][j];
        }
        cout << "\n";
    }
    cout << "\n";
}