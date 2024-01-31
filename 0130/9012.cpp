#include<bits/stdc++.h>
using namespace std;

int n,rcnt,lcnt,a[51];
string s;
int main() {
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> s;
        for(int j=0; j<s.size(); j++){
            if(s[j] == '(') {a[j] = 0; rcnt++;}
            else if(s[j] == ')')
            {
            a[i] = 1;
            lcnt++;
            } 
        }
        
        if(rcnt != lcnt) cout<< "NO\n"; continue;
        if(a[0] == 1) cout << "NO\n"; continue;

        for(int i=0; i<s.size(); i++){
          rcnt--;
          lcnt--;
          if(rcnt == 0 && lcnt == 0){
            cout<< "YES\n"; continue;
          }
        }
         if(lcnt == 1 && rcnt == 0){
            cout << "NO\n"; continue;
          }
        

        rcnt = lcnt = 0;
    }


    return 0;
}