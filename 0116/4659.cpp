#include<bits/stdc++.h>
using namespace std;


string s;
int idx,vcnt,mcnt;

bool isVowel(int idx){
    return (idx == 'a' || idx == 'e' || idx =='i' || idx == 'o' || idx =='u');
}

int main() {

    while(true){
        cin >> s;
        if(s == "end") break;
        vcnt = mcnt = 0;
        int prev = -1;
        bool flag = 0;
        bool is_include_v = 0;
        for(int i=0; i<s.size(); i++){
            int idx = s[i];
            if(isVowel(idx)) vcnt++, mcnt =0, is_include_v = 1;
            else mcnt++, vcnt = 0;
            if(idx >= 1 && (prev == idx && (idx != 'e' && idx != 'o'))) flag = 1;
            if(vcnt == 3 || mcnt == 3) flag =1;
            prev = idx;
        }
        if(is_include_v ==0) flag = 1;
        if(flag) cout << "<" << s << ">" << " is not acceptable.\n";
        else cout << "<" << s << ">" << " is acceptable.\n";
    }
}