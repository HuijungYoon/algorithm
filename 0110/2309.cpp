#include<bits/stdc++.h>
using namespace std;

int a[9],sum;
vector<pair<int,int>> ret;

void solve() {
    
    for(int i=0; i<9; i++){
        for(int j=i+1; j<9; j++){
            if(sum - a[i] - a[j] == 100){
                ret.push_back({a[i],a[j]});
            }
        }
    }
}


int main() {
    sum = 0;
    for(int i=0; i<9; i++){
        cin >> a[i];
        sum +=a[i];
    }
    solve();
    sort(a,a+9);
    for(int i=0; i<9; i++){
        if(a[i] == ret[0].first || a[i] == ret[0].second) continue;
        cout << a[i] << "\n";
    }


    return 0;

}