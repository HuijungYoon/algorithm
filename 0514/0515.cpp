#include<bits/stdc++.h>
using namespace std;

pair<int,int> pi;
tuple<int,int,int> tp;
int a, b , c;
int main() {
    pi ={ 1,2};
    tp = make_tuple(1,2,3);
    tie(a,b) = pi;
    cout <<  a << ':' << b << '\n';
    tie(a,b,c) = tp; 
    cout << a << ":" << b << ":" << c <<  "\n";



    return 0;
}