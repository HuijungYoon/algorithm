#include<bits/stdc++.h>
using namespace std;

map<string,int> mp; 
string a[] = {"윤희중", "강소영", "박종선"};
// string a[] = {"주홍철", "양영주", "박종선"};

int main() {
    for(int i=0; i<3; i++) {
        mp.insert({a[i],i+ 1});
        // mp[a[i]] = i + 1;
    }

    cout << mp["heejung"] << "\n";
    mp["heejung"] = 4;
    cout << mp["heejung"] << "\n";

    mp.erase("heejung");w
    auto it  = mp.find("heejung");
    if(it == mp.end()) {
        cout << "nothing left" << "\n";
    }
    mp["heejung"] = 100;
    it = mp.find("heejung");
    if(it != mp.end()) {
        cout << (*it).first << " : " << (*it).second << "\n";
    }

    for(auto it : mp){
        cout << (it).first << " : " << (it).second << "\n";
    }

    for(auto it = mp.begin(); it != mp.end(); it++) {
        cout << (*it).first << " : " << (*it).second << "\n";
    }
    mp.clear();
    




    return 0;
}