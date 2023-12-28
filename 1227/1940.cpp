#include<bits/stdc++.h>
using namespace std;

int n,m,cnt[15004],ret;

int main() {
    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> cnt[i];
    }

    for(int i=0; i<n; i++)
    {
        cin >> m;
        for(int j=i+1; j<n; j++)
        {
            if(m == cnt[i] + cnt[j])
            {
                ret++;
            }
        }

    }

cout << ret << "\n";





    return 0;
}