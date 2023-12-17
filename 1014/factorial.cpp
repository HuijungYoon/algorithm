#include<bits/stdc++.h>
using namespace std;

int fact_ret(int n) {
    cout << "factorial : " << n << "\n"; 
     if(n == 1 | n == 0 ) return 1;
    return n * fact_ret(n-1);
}

int fact_for(int n)
{
    int ret = 1;
    for(int i =1; i<=n; i++)
    {
        ret *= i;

    }
    return ret;
}








int fibo(int n)
{
    cout << "fibo : " << n << "\n";
    if(n ==0 | n==1) return n;
    return fibo(n -1 ) + fibo(n- 2);
}



int main() {
   
   //fibo
//    int n =4;
//    cout << fibo(n) << "\n";

//factorial
   cout << fact_ret(10) << "\n";
    cout << fact_for(10) << "\n"; 

    return 0;
}