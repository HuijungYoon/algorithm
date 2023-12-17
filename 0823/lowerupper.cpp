#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int> a {1,2,3,3,4,100};
int main() {
    // vector<int> a {1,2,3,3,3,4};
    // cout << lower_bound(a.begin(), a.end(), 3) - a.begin() << "\n";
    // cout << upper_bound(a.begin(), a.end(), 3) - a.begin() << "\n";
    
    //요소출력
   // cout << *lower_bound(a.begin(),a.end(), 100) << "\n";
   
   //3이 몇개있는지 확인도가능
   cout << upper_bound(a.begin(),a.end(),3) - lower_bound(a.begin(),a.end(),3)<< "\n";



    return 0;
}

