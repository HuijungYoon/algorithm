//sacnf는 보통입력방식이 까다롭거나 꼭쓰라고하는경우에 쓰는게 좋으며 일반적으로는 cin을 사용하는게좋다.


#include <bits/stdc++.h>
using namespace std;

int a ;
double b;
char c;

int main() 
{
    scanf("%d %lf %c",&a,&b,&c);
    printf("%d\n",a);
    printf("%lf\n",b);
    printf("%c\n",c);

    return 0;
}
