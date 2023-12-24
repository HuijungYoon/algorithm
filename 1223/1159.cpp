#include<bits/stdc++.h>
using namespace std;

int n,b,cnt[26];
string s,temp;
char c;

int main() {
    cin >> n;
    
    for(int i=0; i<n; i++)
    {
        cin >> s;
        int b = (int)s[0] - 97;

        for(int i=0; i<26; i++)
        {
            if(i == b)
             cnt[i]++;
        }

    }

    for(int i=0; i<26; i++)
    {
        if(cnt[i] == 5)
        {
            c = i + 97;
            temp +=c;
        }
     
    };
    if(temp.length() > 0) {
        cout << temp << " ";
    }else {
        cout << "PREDAJA" << "";
    }

    return 0;
}