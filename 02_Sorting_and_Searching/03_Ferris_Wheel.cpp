// Problem Link https://cses.fi/problemset/task/1090

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int &i : a)    cin >> i;
    sort(a.begin(), a.end());
    int i = 0, j = n - 1, count = 0;
    while(i <= j){
        if(i < j && a[i] + a[j] <= k){
            i++;
            j--;
            count++;
        }
        else{
            j--;
            count++;
        }
    }
    cout << count << "\n";
}