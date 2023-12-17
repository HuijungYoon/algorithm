#include <bits/stdc++.h>
using namespace std;
//배열의합을 쉽고빠르게 구해주는 함수 accumulate
//max_element(), min_element();
int main() {

vector<int> v = {1,2,3,4,5,6,7,8,9,10};

int a = *max_element(v.begin(),v.end());
auto b = max_element(v.begin(),v.end());

cout << a << '\n';
cout << (int)(b - v.begin()) << "\n";


//int sum = accumulate(v.begin(),v.end(),0);
//cout << sum << '\n';


}