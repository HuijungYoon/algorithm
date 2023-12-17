#include<bits/stdc++.h>
using namespace std;

vector<int> v;
int main() {

    //2차원배열선언
    vector<vector<int>> v;
    vector<vector<int>> v2(10,vector<int>(10,0));
    vector<int> v3[10];

    for(int i=0; i<10; i++)
    {
        vector<int> temp;
        v.push_back(temp);
        
    }


    // vector<int> v(5,100);

    // for(int a : v) cout << a << " ";
    // cout << "\n";



    // for(int i =1; i<=10; i++) v.push_back(i);
    // for(int a : v) cout << a << " ";
    // cout << "\n";
    // v.pop_back();

    // for(int a : v) cout << a << " ";
    // cout << "\n";

    // v.erase(v.begin(),v.begin()+3);
    // for(int a : v) cout << a << " ";
    // cout << "\n";

    // auto a = find(v.begin(),v.end(),100);
    // if(a == v.end()) cout << "not found" << "\n";

    // fill(v.begin(),v.end(),10);
    // for(int a:v) cout << a << " ";
    // cout << "\n";
    // v.clear();

    // cout << " 암것도없나?" << "\n";
    // for(int a : v) cout << a << " ";
    // cout << "\n";




// 1 2 3 4 5 6 7 8 9 10 
// 1 2 3 4 5 6 7 8 9 
// 4 5 6 7 8 9 
// not found
// 10 10 10 10 10 10 
//  암것도없나?

    return 0;
}