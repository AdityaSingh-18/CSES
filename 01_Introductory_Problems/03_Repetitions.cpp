// Problem Link https://cses.fi/problemset/task/1069

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    string s;
    cin >> s;
    int n = s.size();
    int maxRepetition = 1;
    for (int i = 0; i < n - 1; i++){
        int count = 1;
        while(i < (n - 1) && s[i] == s[i + 1]){
            i++;
            count++;
        }
        maxRepetition = max (maxRepetition, count);
    }
    cout << maxRepetition << "\n";
}