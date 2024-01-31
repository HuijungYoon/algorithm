#include<bits/stdc++.h>
using namespace std;

string s;

bool check(string s) {
    stack<char> stk;
    for(char c : s){
        if(c == '(') stk.push(c);
        else {
            if(!stk.empty() && c ==')') stk.pop();
            else if(stk.empty() && c ==')') return false;
        }
        if(c == '[') stk.push(c);
        else {
            if(!stk.empty() && c ==']') stk.pop();
            else if(stk.empty() && c ==']') return false;
        } 
    }
    return stk.empty();
}

int main() {

    while(true){
        cin >> s;
        if(s==".") break;

        if(check(s)) cout<<"yes\n";
        else cout <<"no\n";
    }



    return 0;
}