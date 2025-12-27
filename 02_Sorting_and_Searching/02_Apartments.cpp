// Problem Link https://cses.fi/problemset/task/1084

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n), b(m);
    for (int &i : a)    cin >> i;
    for (int &i : b)    cin >> i;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int count = 0;
    for (int i = 0, j = 0; i < n && j < m;){
        if(abs(a[i] - b[j]) <= k){
            i++;
            j++;
            count++;
        }
        else if(a[i] < b[j])    i++;
        else    j++;
    }
    cout << count << "\n";
}