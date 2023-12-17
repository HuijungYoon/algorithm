#include <bits/stdc++.h>
using namespace std;


vector<string> split(string delimiter, string input)
{
    vector<string> ret;
    long long pos = 0;
    string token = "";

    while((pos = input.find(delimiter)) != string::npos)
    {
        token = input.substr(0,pos);
        ret.push_back(token);
        input.erase(0,pos+delimiter.length());
    }

    ret.push_back(input);
    return ret;
};

int main() {

    string txt = "안녕하다 나는 윤희중이다. 모두 차렷 경례!";
    vector<string> hi = split(" ",txt);
    for(string s : hi) cout << s << "\n";



    return 0;
}