#include<bits/stdc++.h>
using namespace std;

tuple<int,int,int> tl;
pair<int,int> pr;
int a, b, c;
int main() {

    pr = {1,2};
    tl = make_tuple(4,2,3);

    tie(a,b) = pr;
    cout << "a :" << a <<"b :" << b << "\n";
    tie(a,b,c) = tl;
    cout << "a : " << a << "b : " << b << "c : " << c << "\n";




    return 0;
}