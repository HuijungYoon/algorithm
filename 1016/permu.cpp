#include <bits/stdc++.h>
using namespace std;
int n=3, r= 3;
int a[3] = {1,2,3};

void printV()
{
    for(int i=0; i<r; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
   

    
}



void makePermustaion(int n, int r , int depth)
{
    if(r == depth)
    {
        printV();
        return;
    }
    for(int i = depth; i<n; i++)
    {
        swap(a[i],a[depth]);
        makePermustaion(n,r,depth +1);
        swap(a[i],a[depth]);
    }
}


int main() {
    // for(int i=0; i<3; i++)
    // {
    //     a[i] = i+1;
    // }
    makePermustaion(n,r,0);
    



    return 0;
}