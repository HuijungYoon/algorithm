#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
string temp,s;

int main() {
    cin >> s;
    temp = s;
    reverse(s.begin(),s.end());
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] != temp[i]) {
        cout << 0 << " ";

        return 0;
        }
    }
    cout << 1 << " ";
    
    return 0;
}