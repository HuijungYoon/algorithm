#include<bits/stdc++.h>
using namespace std;
//에라토네스의 체
//소수가 아닌 값들에 대한 불리언 배열을 만들어 소수만을 걸러낼수있는 방법이다. 

// const int max_n = 40;
// bool che[max_n +1];
//예를들어 40을 넣었을떄 che[40]이 참조가 되므로 max_n +1 dmf sjgdjdigka
//max_n 까지의 소수를 만드는 함수   


// vector<int> era(int mx_n)
// {
//     vector<int> v;
//     for(int i=2; i<mx_n; i++)
//     {
//         if(che[i]) continue;
//         for(int j = 2*i; j<= mx_n; j+=i)
//         {
//             che[j] = 1;
//         }
//     }

//     for(int i =2; i<=mx_n; i++) if(che[i] ==0) v.push_back(i);
//     return v;
// }

// const int mx = 40;
// bool che[mx +1];

// bool check(int n) {
//     if(n<=1) return 0;
//     if(n==2) return 1;
//     if(n%2 ==0) return 0;
//     for(int i=2; i*i <=n; i++)
//     {
//         if(n%i == 0) 
//         return 0;
//     }
//     return 1;
// }

bool check(int n)
{
    if(n<=1) return 0;
    if(n==2) return 1;
    if(n%2 ==0) return 0;
    for(int i=2; i*i <n; i++)
    {
        if(n%i ==0) return 0;
    }
    return 1;
}






// vector<int> era(int mx)
// {
//    vector<int> v;
//     for(int i = 2; i<mx; i++)
//     {
//         if(che[i]) continue;;
//         for(int j=2*i; j<mx; j+=i)
//         {
//              che[j] == 1;
//         }
//     }

//     for(int i=2; i<=mx; i++) if(che[i] == 0) v.push_back(i);
//     return v;

// }

int main() {
    // vector<int> a = era(max_n);
    // for(int i : a) cout << i << " ";
    // cout << "\n";

    for(int i=0; i<20; i++)
    {
        if(check(i))
        {
            cout << i << "는 소수입니다.\n";
        }
    }

    return 0;    
}


