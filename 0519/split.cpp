#include <bits/stdc++.h>
using namespace std;

// vector<string> split(string input, string delimiter) {
//     vector<string> ret;
//     long long pos = 0;
//     string token = "";

//     while((pos = input.find(delimiter)) != string::npos)
//     {
//         token = input.substr(0,pos);
//         ret.push_back(token);
//         input.erase(0,pos + delimiter.length());
//     }
//     ret.push_back(input);
//     return ret;
// }

vector<string> split(string input, string delimeter)
{
    long long pos = 0;
    string token = "";
    vector<string> ret;
    while((pos = input.find(delimeter)) != string::npos)
    {
        token = input.substr(0,pos);
        ret.push_back(token);
        input.erase(0,pos+delimeter.length());
    }
    ret.push_back(input);
    return ret;
}


int main() {
  
  string s = "안녕하세요 저는 윤희중입니다. 장래희망은 돈많은 사업가입니다.", d = " ";
  vector<string> a = split(s,d);
  for(string b : a) cout << b << "\n";

    return 0;
}