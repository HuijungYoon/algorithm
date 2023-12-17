#include<bits/stdc++.h>
using namespace std;
const int n = 3;

int m[n][n], visited[n][n];
const int dy[] = {-1,0,1,0};
const int dx[] = {0,1,0,-1};
int y = 0, x = 0;

void go(int y, int x)
{
    visited[y][x] = 1;
    cout << y << " : " << x << "\n";

    for(int i=0; i<4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(ny < 0 || ny >=n || nx < 0 || nx >=n) continue;
        if(m[ny][nx] == 0 ) continue;
        if(visited[ny][nx]) continue;

        go(ny,nx);
    }
}



int main() {


    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> m[i][j];
        }
    }

    go(0,0);

 

    return 0;
}