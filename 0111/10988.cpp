#include<bits/stdc++.h>
using namespace std;
string s;
int cnt[101];


int main() {
    cin >> s;

    for(int i=0; i<101; i++){
        cnt[i] = s[i];
    }

    reverse(s.begin(),s.end());

    for(int i=0; i<101; i++){
        if(cnt[i] != s[i]){
            cout << 0 <<"\n";
            return 0;
        } 
        
    }

     cout << 1 << "\n";

    return 0;
}