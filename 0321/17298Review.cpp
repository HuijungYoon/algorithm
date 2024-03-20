#include<bits/stdc++.h>
using namespace std;
int n,a[10000001],ret[1000001];
stack<int> s;
int main() {
    memset(ret,-1,sizeof(ret));
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
        while(s.size() && a[s.top()] < a[i]){
            ret[s.top()] = a[i];
            s.pop();
        }
        s.push(i);
    }

    for(int i=0; i<n; i++) cout << ret[i] << " ";  


}