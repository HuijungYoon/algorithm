#include<bits/stdc++.h>
using namespace std;
int a[10];
int b[10][10];

int main() {
    fill(a, a+10,100);

    for(int i=0; i<9; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
    fill(&b[0][0],&b[0][0] + 10 * 10,50);
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
           cout << b[i][j] << " ";
        }
        cout << "\n";
    }



    return 0;
}