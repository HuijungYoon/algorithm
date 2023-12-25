#include<bits/stdc++.h>
using namespace std;

int n ,pos;
string s,keys,pre,suf;

int main() {
    cin >> n;
    cin >> keys;

    pos = keys.find('*');
    pre = keys.substr(0,pos);
    suf = keys.substr(pos + 1);

    for(int i=0; i<n; i++)
    {
        cin >> s;
        if(pre.size() + suf.size() > s.size())
        {
            cout << "NE\n";
        }else
        {
            if(pre == s.substr(0,pre.size()) && suf == s.substr(s.size() - suf.size()))
            {
            cout << "DA\n";
            }
            else {
            cout <<"NE\n";
            }
        }

    }



    return 0;
}