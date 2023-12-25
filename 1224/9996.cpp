#include<bits/stdc++.h>
using namespace std;
int n;
string a;
string s[104];

int main() {
    cin >> n;
    cin >> a;
    
    for(int i=0; i<n; i++) {
        cin >> s[i];  
    }

    for(int i=0; i<n; i++)
    {
          
        if(char(*a.begin()) == char(*s[i].begin()) && char(*((a.end()-1))) == char(*(s[i].end()-1)))
        {
            cout << "DA" << "\n";
        }
        else {
            cout << "NA" << "\n";
        }
    }
    
    
    return 0;
}