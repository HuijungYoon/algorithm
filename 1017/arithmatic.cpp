#include <bits/stdc++.h>
using namespace std;

// int n = 5;
// int ret =0;


//등비수열의 합구하기





int main() {

int a =1, r=2, n=4;
vector<int> v;
cout << a*((int)pow(2,n)-1 / (r-1));
cout << "\n";
for(int i=0; i<n; i++)
{
    v.push_back(a);
    a *= r;
}

for(int i : v) cout << i << ' ';

// for(int i =1; i<=5; i++)
// {
//     ret +=i;
// }
// cout << ret << "\n";
// cout << n * (n+1) /2 << "\n";

return 0;
}