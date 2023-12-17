#include <bits/stdc++.h>
using namespace std;
//int i;
//string s = "huijung";

int main() {
    // i = 0;
    // int * a = &i;
    // cout << a << '\n';
    // string * b = &s;
    // cout << b << '\n';
    
    string a = "abcda";
    string* b = &a;
    cout << b << "\n";
    cout << *b <<"\n";

    return 0;
}