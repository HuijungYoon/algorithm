#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    //원하는값이 없을떄 나오는방식
    // vector<int> v = {2,3,4,5,7};
    
    // cout << upper_bound(v.begin(),v.end(),6) -v.begin() << "\n";
    //4
    // cout << lower_bound(v.begin(),v.end(),6) - v.begin() << "\n";
    //4

    // cout << upper_bound(v.begin(),v.end(),9) -v.begin() << "\n";
    //5
    // cout << lower_bound(v.begin(),v.end(),9) - v.begin() << "\n";
    //5

    // cout << upper_bound(v.begin(),v.end(),0) -v.begin() << "\n";
    //0
    // cout << lower_bound(v.begin(),v.end(),0) - v.begin() << "\n";
    //0


    //값의개수출력
    // vector<int> a = { 1,3,3,3,3,3,3,3,5,6,7,10};
    // cout << upper_bound(a.begin(),a.end(),3) - lower_bound(a.begin(),a.end(),3) << "\n";
    //7

    //요소 값출력
    // vector<int> v = {1,2,3,3,4,100};
    // cout << *lower_bound(v.begin(),v.end(),100) << "\n";
    //100

    // 안쓰는방식
    // vector<int> a {1,2,3,3,3,4};
    // cout << &*lower_bound(a.begin(),a.end(),3) - &*a.begin() << "\n";
    // vector<int> b {0,0,0,0};
    // cout << &*(b.begin()+3) - &*b.begin() << "\n";
    
    //2
    //3

    //주소값을 기반으로 값을유추한다
    // vector<int> a {1,2,3,3,3,4};
    // cout << &*lower_bound(a.begin(),a.end(),3) << "\n";
    // cout << &*a.begin() << "\n";
    // cout << &*(a.begin() +1 ) << "\n";


    // vector<int> a = {1,2,3,3,3,4};
    // cout << lower_bound(a.begin(),a.end(),3) - a.begin() << "\n";
    // cout << upper_bound(a.begin(),a.end(),3) - a.begin() << "\n";


    return 0;
}