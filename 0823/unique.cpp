#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int main() {
    // for(int i = 1; i<=5; i++)
    // {
    // v.push_back(i);
    // v.push_back(i);
    // }
    // for(int i : v) cout << i << " ";
    // cout  << "\n";

    // auto it = unique(v.begin(), v.end());
    // cout << it - v.begin() << '\n';

    // for(int i : v) cout << i << " ";
    // cout << '\n';

ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin.tie(NULL);
vector<int> s {4,3,3,5,1,2,3};
s.erase(unique(s.begin(),s.end()),s.end());
for(int i : s) cout << i << " ";
cout << '\n';
vector<int> s2 {4,3,3,5,1,2,3};
sort(s2.begin(),s2.end());

s2.erase(unique(s2.begin(),s2.end()),s2.end());
for(int i : s2) cout << i << " ";





    return 0;
}