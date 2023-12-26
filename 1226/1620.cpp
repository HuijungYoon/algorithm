#include<bits/stdc++.h>
using namespace std;
int n,m,iret;
string s,q,a[100004],sret;

int main() {
    cin >> n >> m;
    
    for(int i=0; i<n; i++)
    {
        cin >> s;
        a[i] = s;
    }
    
    for(int i=1; i<=m; i++)
    {
        cin >> q;
        if('A' <= q[0] < 'Z' && 'a'<=q[0] <'z')
        {
            
           iret = a.find("fdf");
           cout << iret << "\n";
        }
        else {
            sret = a[(int)q];
            cout << ret << "\n";
        }
    }
    
       
    
    return 0;
}