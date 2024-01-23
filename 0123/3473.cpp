#include<bits/stdc++.h>
using namespace std;
int n,v;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> v;
        int ret2 = 0; int ret5 = 0;
        for(int j=2; j<=v; j*=2){
            ret2 += v / j;
        }
        for(int j=5; j<=v; j*=5 ){
            ret5 += v/ j;
        }
        
        cout << min(ret2,ret5) << "\n";
    }
    
    
    return 0;
}