#include<bits/stdc++.h>
using namespace std;


void print(vector<int> v)
{
    for(int i : v)
    {
    cout << i << " ";
    }
    cout << "\n";
}


int main() {
    
    //시계방향
    vector<int> v = {1,2,3,4,5,6};
    rotate(v.begin(),v.begin() +1,v.end());
    print(v);
    cout << "\n";
    //원하는지점을 포함할떄
    vector<int> b = {1,2,3,4,5,6};
    rotate(b.begin()+1,b.begin()+2,b.begin()+5);
    print(b);
   
    vector<int> c = {1,2,3,4,5,6};
    int temp;
    temp = c[0];
    c[0] = c[1];
    c[1] = c[2];
    c[2] = c[3];
    c[3] = c[4];
    c[4] = c[5];
    c[5] = temp;
    for(auto it : c) cout << it << " ";







    return 0;
}