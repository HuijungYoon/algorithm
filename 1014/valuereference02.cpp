#include<bits/stdc++.h>
using namespace std;

//primitive ex) int,double, long float 일때는 call by value를 쓰는게 메모리를 덜먹는다
//class,struct,배열,string[], int[]은 call by reference를 쓰는게 메모리를 덜먹는다.


//call by value;
// int add (int a, int b)
// {
//     a += 10;
//     cout << a << "\n";
//     return a +b;
// }

//call by reference
int add (int &a, int b)
{
    a += 10;
    cout << a << "\n";
    return a +b;
}

vector<int> v(3,0);
//call by value;
// void go(vector<int> v) {

//     v[1] = 100;
// }
//call by reference;
void go(vector<int> &v) {

    v[1] = 100;
}

int main() {
   go(v);
    for(int it : v) cout << it << "\n";

   
    // int a = 1;
    // int b = 2;
    // add(a,b);
    // cout << a << "\n";


    return 0;
}