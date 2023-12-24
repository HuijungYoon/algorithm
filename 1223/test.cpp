#include<bits/stdc++.h>
using namespace std;
int n = 3;
int m =4;


void rotate_left90(vector<vector<int>> &key)
{
    n = key.size();
    m = key[0].size();

    for(int i=0; i<n; i++)
    {
        for(int j =0; i<m; j++)
        {
            key[i][j] = key[j][m-i-1];
        }
        cout << "\n";
    }
    key.resize(n);
    key[0].resize(m);
}

int main() {
    vector<vector<int>> a ={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    rotate_left90(a);

    for(auto it : a)
    {
        cout << it << " ";
    }


    return 0;
}