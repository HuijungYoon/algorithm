#include<bits/stdc++.h>
using namespace std;


int a = 1, r= 2, n =4;

int main() {
    vector<int> v;
    cout << a*((int)pow(2,n) - 1) / (r-1);
    cout << "\n";

    for(int i= 1; i<n; i++)
    {
        v.push_back(a);
        a*= r;
    }
    for(auto it : v)
    {
        cout << it << " ";
    }



    return 0;
}