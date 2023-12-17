#include <bits/stdc++.h>
using namespace std;

queue<int> qe;
int main() {
for(int i=1; i<=10; i++) qe.push(i);
while(qe.size())
{
    cout<< qe.front() << "\n";
    qe.pop();
}


    return 0;
}