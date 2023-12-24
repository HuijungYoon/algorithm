#include<bits/stdc++.h>
using namespace std;

string s,ret;
int main() {
    getline(cin,s);
    //cin >> s;
    

    for(int i=0; i<s.size(); i++)
    {
      
        if((int)s[i] >= 65 && (int)s[i] <91 )
        {
            if(s[i] + 13 >= 91)
            {
                ret += s[i] - 13;
            }else {

            ret +=s[i] + 13;
            }
         
        }
         else if( (int)s[i] >= 97 && (int)s[i] <123)
         {
            if(s[i] + 13 >= 123)
            {
              ret += s[i] - 13;
             } else {
              ret +=s[i] + 13;
             }
         }else {
              ret += s[i];
            }
        
    }
    cout << ret << "\n";
    
    
    
    
    return 0;
}