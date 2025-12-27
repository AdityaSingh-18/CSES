// Problem Link https://cses.fi/problemset/task/1643

//  USING KADANE'S ALGORITHM
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n, first, next;
    cin >> n >> first;
    ll maxSum = first, sum = first;
    for (int i = 1; i < n; i++){
        cin >> next;
        sum = max(sum + next, next);
        maxSum = max (maxSum, sum);
    }
    cout << maxSum << "\n";
}