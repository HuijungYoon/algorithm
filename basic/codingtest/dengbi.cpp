#include<bits/stdc++.h>
using namespace std;
int a = 1;
int r = 5;
int n = 4;
vector<int> v;
int main() {
    cout << a * ((int)pow(r,n) - 1) / (r - 1) << "\n";

    for(int i = 0; i<n; i++) {
        v.push_back(a);
        a*=r;
    }
    for(int i : v) cout << i << " ";

    return 0;
}