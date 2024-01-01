#include<bits/stdc++.h>
using namespace std;


int main() {

int dy[] = {-1,0,1,0};
int dx[] = {0,1,0,-1};

for(int i=0; i<4; i++)
{
    int x = 0; int y=0;
    int ny = y + dy[i];
    int nx = x + dx[i];

    cout << ny << "::" << nx << "\n";

}



    return 0;
}