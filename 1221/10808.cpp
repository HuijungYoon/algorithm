#include<bits/stdc++.h>
using namespace std;
int a[26];
int b[26];
int  cnt;
string s;

int main() {
    //cin >> s;
    s = "helloaaaa";
    
    for(int i=0; i<26;i ++)
    {
        a[i] = i;
    }
    
    
    for(int i=0; i<s.length(); i++)
    {
    
            cnt = (int)s[i] - 97;
            b[cnt]++;
        
    }
    
    for(int i=0; i<26; i++)
    {
        cout << b[i] << " ";
    }
    
    
    return 0;
}