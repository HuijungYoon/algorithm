#include<bits/stdc++.h>
using namespace std;
pair<int,int> pl;
vector<int> ret;
int a[9], sum;

void solve() {
    for(int i=0; i<9; i++) {
        for(int j = i+1; j<9; j++) {
            if(sum - a[i] - a[j] == 100) {
                pl = {i,j};
            }
        }
    }
}


int main() {
    for(int i=0; i<9; i++) {
        cin >> a[i];
        sum += a[i];
    }
    solve();

    for(int i=0; i<9; i++) {
        if(i == pl.first || i == pl.second) continue;
        ret.push_back(a[i]);
    }

    sort(ret.begin(),ret.end());

    for(int v : ret) cout << v << "\n";


}