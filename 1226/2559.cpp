#include<bits/stdc++.h>
using namespace std;

int n,k,temp,psum[100004],ret = -10000004;

int main() {
cin >> n >> k;

for(int i=1; i<=n; i++)
{
    cin >> temp;
    psum[i] = psum[i -1] + temp;
}


for(int i=k; i<=n; i++)
{
    ret = max(ret,psum[i] - psum[i - k]);
    cout << "ret" << ret << "\n";
    cout << "psum[i]" << psum[i] << "\n";
    cout << "psum[i-k]" << k << psum[i-k] << "\n";
}
//cout << ret;





return 0;
}