#include<bits/stdc++.h>
using namespace std;
vector<int> adj[4];


int main() {

adj[0].push_back(1);
adj[0].push_back(2);
adj[0].push_back(3);
adj[1].push_back(0);
adj[1].push_back(3);
adj[2].push_back(0);
adj[2].push_back(1);
adj[3].push_back(0);

for(int i=0; i<4; i++)
{
    cout << "adj" << i << "::" << "\n";
    for(int v : adj[i])
    {
        cout << v;
    }
}








return 0;
}