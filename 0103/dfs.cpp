#include<bits/stdc++.h>
using namespace std;

int dy[] = {-1,0,1,0};
int dx[] ={0,1,0,-1};
int n,m,ret,nx,ny,x,y,k,t;
int a[104][104];
bool visited[104][104];

void dfs(int y, int x){
    visited[y][x] = 1;
    for(int i=0; i<4; i++)
    {
        ny = y + dy[i];
        nx = x + dx[i];
        if(ny<0 || nx<0 || ny>=n || nx>=m) continue;
        if(a[ny][nx] == 1 && !visited[ny][nx]) {
            dfs(ny,nx);
        }
    }
}





int main() {
    cin >> n >> m;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> a[i][j];
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
           if(!visited[i][j] && a[i][j] == 1)
           {
            ret++;
            dfs(i,j);
           }
        }
    }

    cout << ret << "\n";

    return 0;
}