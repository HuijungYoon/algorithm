#include <bits/stdc++.h>
using namespace std;

// priority_queue<int,vector<int>, greater<int>> pq;
// priority_queue<int> pq2;
// priority_queue<int,vector<int>, less<int>> pq3;

struct Point {
    int y,x;
    Point(int y, int x) :y(y), x(x){};
    Point(){y = -1; x = -1;};
    bool operator < (const Point & a) const {
        return  x < a.x; 
    }  
};

priority_queue<Point> pq;

int main() {

    //구조체를 담은 우선큐
    for(int i =1; i<=6; i++)
    {
        pq.push({i,i});
       
    }
  

    cout << pq.top().x << "\n";




    // for(int i= 5; i>=1; i--)
    // {
    //     pq.push(i); pq2.push(i); pq3.push(i);
    // }
    // while(pq.size())
    // {
    //     cout << pq.top() << " : " << pq2.top() << " : " << pq3.top() << "\n";
    //     pq.pop();
    //     pq2.pop();
    //     pq3.pop();

    // }

//     1 : 5 : 5
// 2 : 4 : 4
// 3 : 3 : 3
// 4 : 2 : 2
// 5 : 1 : 1

    return 0;
}