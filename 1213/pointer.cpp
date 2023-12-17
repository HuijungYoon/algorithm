#include<bits/stdc++.h>
using namespace std;

vector<int> v;

int main() {
    for(int i = 1; i<=5; i++) v.push_back(i);
    for(int i = 0; i< 5; i++)
    {
        cout << i << "번째 요소 :" << *(v.begin() + i) << "\n";
        cout << &*(v.begin() + i) << "\n";
    }
    for(auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
        cout <<&*(it) << "\n";
    }



    return 0;
}

// 이터레이터는  컨테이너로 저장되어있는 요소의 주소를 가르키는것이다. 그리고 포인터를 일반화 한것이다.
// 하지만 이터레이터의 주소는 바로 반환은안되고 &*를 통해서 가져올수있다.
