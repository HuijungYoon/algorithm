#include<bits/stdc++.h>
using namespace std;

int main() {
    int n =3;
    vector<vector<int>> a ={{1,2,3},{4,5,6},{7,8,9}};
   int b[3][3];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            b[j][i] = a[i][j];

            cout << b[j][i] << " ";
        }
        cout << "\n";
    }


    return 0;
}