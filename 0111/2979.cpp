#include<bits/stdc++.h>
using namespace std;
int A,B,C,a,b,ret,cnt[101];

int main() {
    cin >> A >> B >> C;
    
    for(int i=0; i<3; i++){
        cin >> a >> b;
        for(int i=a; i<b; i++){
            cnt[i]++;
        }
    }
    
    for(int i=0; i<101; i++){
        if(cnt[i]){
            if(cnt[i] == 1){
                ret+= A*cnt[i];
            }else if(cnt[i] == 2){
                ret+= B*cnt[i];
            }else {
                ret += C * cnt[i];
            }
        }
    }
    cout << ret << "\n";
    
    
    return 0;
}