#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if(a ==0) return b;
    return gcd(b%a,a);
}
 int lcm(int a, int b)
    {
        return (a*b) / gcd(a,b);
    }


int main() {

   int a  =10, b = 12;
   cout << "최소공배수 : "<< gcd(a,b) << "\n"; 
   cout << "최대공약수: " << lcm(a,b) << "\n"; 
   


    return 0;
}