#include <bits/stdc++.h>
using namespace std;
const int max_n = 1004;
int a[max_n];
int a2[max_n][max_n];

//void * memset ( void * ptr, int value, size_t num );
//memset(배열의 이름, k, 배열의 크기) 이렇게 사용합니다.
int main() {
    memset(a,-1,sizeof(a));
    memset(a2,0,sizeof(a2));

    for(int i=0; i<10; i++) cout << a[i] << " ";


    return 0;
}