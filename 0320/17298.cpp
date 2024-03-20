#include<bits/stdc++.h>
using namespace std;

int n,m,mx;
vector<int> v, z;

int main() {
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> m;
        v.push_back(m);
    }

    for(int i=0; i<v.size(); i++){
        for(int j=i; j<v.size(); j++){
            mx = max(v[j],mx);
            if(mx == v[j]){
                z.push_back(-1);
            }else {
                z.push_back(mx);
            }
        }
    }

    for(int v : z) {
        cout << v << " ";
    }



    return 0;
}