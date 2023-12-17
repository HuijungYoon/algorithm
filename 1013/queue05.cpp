#include <bits/stdc++.h>
using namespace std;

//선입선출 FIFO
queue<int> q;

int main() {
    for(int i = 1; i<=10; i++) q.push(i);



    while(q.size())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << "\n";

    return 0;
}