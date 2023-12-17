#include<bits/stdc++.h>
using namespace std;
map<string,int> _mp;

int main() {
   
  _mp["aa"]=1;
  _mp["bb"]=2;
  _mp["cc"]=3;
  _mp["dd"]=4;
  _mp["ee"]=5;

  for(auto c : _mp)
  {
    cout << "c.first :  " <<  c.first << "   c.second :  " << c.second << "\n";
  }

    
    
    
    return 0;
}