#include <bits/stdc++.h>
using namespace std;
//개행문자까지받으려면 getline을 이용하면된다.
//제한된 개행갯수받을떄는 특정문자열을 기준으로 버퍼플래쉬를 받아야한다.
int T;
string s;

int main() {
    // getline(cin,s);
    // cout << s << "\n";
    cin >> T;
    string bufferflush;

    getline(cin,bufferflush);

    for(int i = 0; i<T; i++)
    {
        getline(cin,s);
        cout << s << '\n';
    }

    return 0;
}



