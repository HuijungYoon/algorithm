#include<bits/stdc++.h>
using namespace std;
int a[9],sum;
pair<int,int> pr;
vector<int> ret;
void solve() {
    for(int i=0; i<9; i++){
        for(int j=i+1; j<9; j++){
            if(sum - a[i] - a[j] == 100){
                pr ={i,j};
            }
        }
    }
}

int main() {
    for(int i=0; i<9; i++){
        cin >> a[i];
        sum += a[i];
    }

    solve();

    for(int i=0; i<9; i++){
        if(i == pr.first || i == pr.second) continue;
        ret.push_back(a[i]);
    }
    
    sort(ret.begin(),ret.end());
    for(int v : ret) cout << v << "\n";


    return 0;
}