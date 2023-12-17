#include <bits/stdc++.h>
using namespace std;

// vector<int> v;



// vector<int> a;
// int b[5];

// vector<pair<int,int>> v;
// bool cmp(pair<int,int> a, pair<int,int> b)
// {
//     return a.first > b.first;
// }

// vector<int> v = {1,1,2,2,3,3,5,6,7,8,9};

//vector<int> s = {4,3,3,5,1,2,3};

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);
cout.tie(NULL);
vector<int> s {4, 3, 3, 5, 1, 2, 3}; s.erase(unique(s.begin(),s.end()),s.end()); for(int i : s) cout << i << " ";
cout << '\n';
vector<int> s2 {4, 3, 3, 5, 1, 2, 3}; sort(s2.begin(), s2.end()); s2.erase(unique(s2.begin(),s2.end()),s2.end()); for(int i : s2) cout << i << " ";
return 0;
//     ios_base::sync_with_stdio(false); cin.tie(NULL);
// cout.tie(NULL);
//     s.erase(unique(s.begin(),s.end()),s.end());
//     for(int i: s) cout << i << " ";
//     cout << "\n";

//     vector<int> s2 = {4,3,3,5,1,2,3};
//     sort(s2.begin(),s2.end());
//     s2.erase(unique(s2.begin(),s2.end()),s2.end());
//     for(int i : s2) 
//     cout << i << " ";
    





    // unique(v.begin(),v.end());
    // for(int i : v) cout << i << " ";
    // cout << "\n";

    // for(int i=1; i<=5; i++)
    // {
    //     v.push_back(i);
    //     v.push_back(i);
    // }
    // for(int i :v) cout << i << " ";
    // cout << "\n";
    // auto it = unique(v.begin(),v.end());
    // cout << it - v.begin() << "\n";

    // for(int i : v) cout << i << " ";
    // cout << "\n";


    // for(int i =10; i>= 1; i--)
    // {
    //     v.push_back({i,10-i});
    // }
    // sort(v.begin(),v.end(), cmp);
    // for(auto it : v) cout << it.first << " : " << it.second << "\n";


    // for(int i=10; i>=1; i--)
    // {
    //     v.push_back({i,10-i});
    // }
    // sort(v.begin(),v.end());
    // for(auto it : v) cout << it.first << " : " << it.second << "\n";
    



    // for (int i=5; i>=1; i--) b[i-1] = i;
    // for(int i=5; i>=1; i--) a.push_back(i);

    // //오름차순
    // sort(b,b+5);
    // sort(a.begin(),a.end());
    // for(int i: b) cout << i << " ";
    // cout << "\n";
    // for(auto i : a) cout << i << " ";
    // cout << "\n";

    // //오름차순
    // sort(b,b+5, less<int>());
    // sort(a.begin(), a.end(), less<int>());
    // for(int i : b) cout << i << " ";
    // cout << "\n";
    // for(int i : a) cout << i << " ";
    // cout << "\n";

    // //내림차순
    
    // sort(b,b+5,greater<int>());
    // sort(a.begin(),a.end(),greater<int>());
    // for(int i : b) cout << i << " ";
    // cout << "\n";
    // for(int i : a) cout << i << " ";
    // cout << "\n";






   
}