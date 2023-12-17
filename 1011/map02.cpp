#include<bits/stdc++.h>
using namespace std;

//key value 한쌍으로 이루어져있음 그러므로 key는 중복된값이 들어올수없습니다. 
//자동으로 오름차순정렬됨
// map<string,int> mp;
// string a[] = {"윤희중","강소영","황해솔"};
map<int,int> mp ;
map<string,string> mp2;

int main() {

//0이들어가는걸 비교하기 귀찮을때

if(mp.find(1) == mp.end())
{
    mp[1] = 2;
}
for(auto i : mp) cout << i.first << " : " << i.second << "\n";



//맵에 값이없을떄 값을 할당하는 방법

// if(mp[1] == 0)
// {
//     mp[1] = 2;
// }
// for(auto i : mp) cout << i.first << " " << i.second;

// 1 2






//     for(int i = 0; i< 3; i++)
//     {
//         mp.insert({a[i],i +1});
//         mp[a[i]] = i + 1;
//     }

//     cout << mp["mark"] << "\n";
//     mp["mark"] = 4;
//     cout << mp.size() << "\n";
//     mp.erase("mark");
//     auto it = mp.find("mark");
//     if(it==mp.end())
//     {
//         cout << "not found\n";
//     }
//     mp["mark"] = 1000;

//     it = mp.find("mark");
//     if(it != mp.end())
//     {
//         cout << (*it).first << " : " << (*it).second << "\n";
//     }
// //mark : 1000
//     cout << "\n";

//     for(auto it : mp)
//     {
//         cout << (it).first << " : " << (it).second << "\n";
//     }
// //mark : 1000
// // 강소영 : 2
// // 윤희중 : 1
// // 황해솔 : 3
//    cout << "\n";
//     for(auto it = mp.begin(); it !=mp.end(); it++)
//     {
//         cout << (*it).first << " : " << (*it).second << "\n";
//     }

// // mark : 1000
// // 강소영 : 2
// // 윤희중 : 1
// // 황해솔 : 3
//     mp.clear();




    
    return 0;
}