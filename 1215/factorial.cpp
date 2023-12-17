#include<bits/stdc++.h>
using namespace std;

int fact_ret(int n)
{
    if(n == 0 || n == 1)
    return 1;
    return n * (fact_ret(n -1));
}

int fact_ret_for(int n)
{
   int ret = 1;
      for(int i =1; i<=n; i++)
    {  
        ret*= i;

    }

    return ret;
}


int main() {
    int n = 5;
    
    cout << fact_ret(n);
    cout << fact_ret_for(n);
  




    return 0;
}