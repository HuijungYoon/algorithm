#include<bits/stdc++.h>
using namespace std;

int sum(int a, int b)
{
    a += 10;
    cout << a << "\n";
    return a+b;
}

int main() {
    int a = 1;
    int b = 2;
    int add = sum(a,b);
    cout << add << "\n";
    cout << a << "\n";


    return 0;
}