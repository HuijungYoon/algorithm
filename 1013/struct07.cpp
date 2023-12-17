#include <bits/stdc++.h>
using namespace std;

//개발자의 커스텀한 자료구조


// struct Ralo {
//     int a,b;
//     double c,d,e;
// };

// void print(Ralo ralo)
// {
//     cout << ralo.a << " " << ralo.b << " " << ralo.c << " " << ralo.d << " " << ralo.e << "\n";
// }

// struct Point {
//     int x,y;
//     Point(x,y) : x(x), y(y);
//     Point() { x = -1, y = -1};
//     bool operator < (const Point & a) cont {
//         if(x == a.x) return y < a.y;
//         return x < a.x;
//     }
//}

// bool compare(string a, string b)
// {
//     if(a.size() == b.size()) return a < b;
//     return a.size() < b.size();
// }

// struct Ralo {
//     int a, b;
// };

// bool compare(Ralo A, Ralo B)
// {
//     if(A.a == B.a) return A.b<B.b;
//     return A.a < B.a;
// }


//3개의변수비교 struct구조
// struct Point {
//     int x,y,z;

//     bool operator < (const Point & a) const {
//         if(x == a.x) {
//             if(y == a.y) return z < a.z;
//             return  y > a.y;
//         }
//         return  x<a.x;

//     }
// }

//vector에다 struct 넣고 정렬하기
struct Point {
    int y,x;

};

bool cmp (const Point & a, const Point & b)
{
    return a.x > b.x;
};

vector<Point> v;




int main() {
    for(int i = 10; i >= 1; i--)
    {
        v.push_back({i,10-i});
    }
    sort(v.begin(),v.end(),cmp);

    for(auto it : v) cout << it.y << " : " << it.x << "\n";
   
   
    // Ralo a[3] = {{1,2},{1,3},{0,4}};
    // sort(a,a+3,compare);
    
    // for(Ralo A : a) cout << A.a << " : " << A.b << "\n";

    // 0:4 1:2 1:3




    // string a[3] = {"111","33","222"};
    // sort(a,a+3,compare);
    // for(string b : a) cout << b << " ";
    // cout << "\n";

    // 33 111 222


    // Ralo ralo = {1,1,1,1,1};
    // print(ralo);
    // vector<Ralo> ret;
    // ret.push_back({1,2,3,4,5});
    // ret.push_back({1,2,3,4,6});
    // ret.push_back({});
    // ret.push_back({1,3});

    // for(Ralo rl : ret)
    // {
    //     print(rl);
    // }


    return 0;
}