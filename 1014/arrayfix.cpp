#include<bits/stdc++.h>
using namespace std;

// int a[3] = {1,2,3};

// void go(int a[])
// {
//     a[2] = 100;
// }
// void go2(int a[3])
// {
//     a[2] = 1000;
// }
// void go3(int *a)
// {
//     a[2] = 1000;
// }

vector<vector<int>> v;
vector<vector<int>> v2(10,vector<int>(10,0));
vector<int> v3[10];

void go(vector<vector<int>> &v)
{
    v[0][0] = 100;

};

void go2(vector<vector<int>> &v)
{
    v[0][0] = 100;
    
}

void go3(vector<int> v[10])
{
    v[0][0] = 100;
    
}


int main() {
    vector<int> temp;
    temp.push_back(0);
    v.push_back(temp);
    v3[0].push_back(0);
    
    go(v);
    go2(v2);
    go3(v3);

    cout << v[0][0] << " : " << v2[0][0] << " : " << v3[0][0] << "\n"; 


    // go(a); cout << a[2] << "\n";
    // go2(a);  cout << a[2] << "\n";
    // go3(a);  cout << a[2] << "\n";


    return 0;
}