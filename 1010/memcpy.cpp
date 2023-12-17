//깊은복사 memcpy
//memcpy 는 vector에서는 깊은복사가 되지않는다.
#include<bits/stdc++.h>
using namespace std;

// int a[5],temp[5];


int main() {
    // int v[3] = {1,2,3};
    // int ret[3];
    // memcpy(ret,v,sizeof(v));
    // cout << ret[2] << '\n';
    // ret[1] = 100;
    // cout<<ret[1] << '\n';
    // cout <<v[1] << '\n';

// for(int i=0; i<5; i++) a[i] = i;
// memcpy(temp,a,sizeof(a));
// for(int i : temp) cout << i << " ";
// cout << '\n';

// a[4] = 1000;
// for(int i : a) cout << i << " ";
// cout << "\n";

// memcpy(a,temp,sizeof(temp));

// for(int i : a) cout << i << " ";
// cout << '\n';

vector<int> v {1,2,3};
vector<int> ret(3);
memcpy(&ret,&v,3*sizeof(int));
cout << ret[1] << "\n";
ret[1] = 100;
cout << ret[1] << "\n";
cout << v[1] << "\n";





    return 0;
}