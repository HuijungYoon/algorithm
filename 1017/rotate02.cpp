#include<bits/stdc++.h>
using namespace std;

int n = 3, m = 4;


void rotate_left_90(vector<vector<int>> &key)
{
    int n = key.size();
    int m = key[0].size();
    vector<vector<int>> temp(m,vector<int>(n,0));
      for(int i =0; i<m; i++)
    {
        for(int j =0; j<n; j++)
        {
            temp[i][j] = temp[j][m-i-1];
        }
    }
    key.resize(m);
    key[0].resize(n);
    key = temp;
    return;

}


int main() {
    // 1,2,3,4
    // 5,6,7,8
    // 9,10,11,12
    // => left rotate
    // 4,8,12
    // 3,7,11
    // 2,6,10
    // 1,5,9
// ------------------------
     // 1,2,3,4
    // 5,6,7,8
    // 9,10,11,12
    // => right rotate
    // 9,5,1
    // 10,6,2
    // 11,7,3
    // 12,8,4

  


    




    return 0;
}