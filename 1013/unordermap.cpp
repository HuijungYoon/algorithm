#include<bits/stdc++.h>
using namespace std;


//map과 unodered_map의 차이
// 정렬이안됨,해시테이블기반,탐색,삽입,삭제 평균적으로 O(1) 가장최악의경우 0(N)
//되도록이면 map을 쓰는걸 추천한다
unordered_map<string,int> umap;

int main() {
    
    umap["bcd"] = 1;
    umap["aaa"] = 2;
    umap["dfd"] = 3;

    for(auto it : umap)
    {
        cout << it.first << " : " << it.second << "\n";

    }

    return 0 ;
}