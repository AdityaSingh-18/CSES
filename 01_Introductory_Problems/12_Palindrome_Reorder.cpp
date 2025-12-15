// Problem Link https://cses.fi/problemset/task/1755

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    string s;
    cin >> s;
    int n = s.size();
    vector<int> freq(26, 0);
    for (int  i = 0; i < n; i++){
        freq[s[i] - 'A']++;
    }
    int count = 0;
    for (auto &f : freq){
        if(f % 2 == 1)    count++;
    }
    sort(s.begin(), s.end());
    s.erase(unique(s.begin(), s.end()), s.end());
    vector<string> b(n);
    if(count <= 1){
        int j = 0;
        for (int i = 0; i < (int)s.size(); i++){
            int currentFreq = freq[s[i] - 'A'];
            if(currentFreq % 2 == 1){
                b[(n - 1) / 2] = s[i];
            }
            while(currentFreq > 1){
                b[j] = s[i];
                b[n - 1 - j] = s[i];
                j++;
                currentFreq -= 2;
            }
        }
        for (int i = 0; i < n; i++){
            cout << b[i];
        }
        cout << "\n";
    }
    else    cout << "NO SOLUTION\n";
}