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
    

    getline(cin, s); 
    for(int i = 0; i < s.size(); i++){
        // 대문자인경우
        if(s[i] >= 65 && s[i] < 97){
            if(s[i] + 13 > 90) s[i] = s[i] + 13 - 26; 
            else s[i] = s[i] + 13;  
        }else if(s[i] >= 97 && s[i] <= 122){
            if(s[i] + 13 > 122)s[i] = s[i] + 13 - 26; 
            else s[i] = s[i] + 13;  
        }
        cout << s[i];  
    } 
    
    
    
    return 0;
}