#include<bits/stdc++.h>
using namespace std;


int gcp(int a, int b) {
    if(a == 0) return b;
    return gcp(b% a, a);
}

int lcm (int a, int b) {
    return (a * b) / gcp(a,b);
}

int main() {
    int a = 10, b=12;
    int result = lcm(a,b);
    cout << result << "\n";


    return 0;
}