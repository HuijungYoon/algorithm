#include<bits/stdc++.h>
using namespace std;

int main() {
    int a[9];
    int sum = 0;
    
    for(int i=0; i<9; i++)
    {
        cin >> a[i];
       
    }

  for(int i=0; i<9; i++)
    {
        cout << a[i] << "\n";
       
    }

    do {
        for(int i=0; i<9; i++)
        {
            
            sum += a[i];
            if(sum == 100) break;
        }
        
    }while(next_permutation(a,a+9));
        
        cout << "\n";
        cout << "\n";


    for(int i =0; i<7; i++)
    {
        cout << a[i] << "\n";
    }
        
    
    return 0;
}