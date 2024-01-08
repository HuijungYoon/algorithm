#include<bits/stdc++.h>
using namespace std;

int dy[4] = {-1,0,1,0};
int dx[4] = {0,1,0,-1};
int a[51][51];
bool visited[51][51];
int n,m,k,x,y,ret,t;

void dfs(int y,int x)
{
    visited[y][x] = 1;
    for(int i=0; i<4; i++)
    {
        int ny = y +dy[i];
        int nx = x +dx[i];
        if(ny<0 || nx< 0 || ny>=m || nx>=n) continue;
        if(a[ny][nx] == 1 && !visited[ny][nx])
        {
            dfs(ny,nx);
        }
    }
    return;
}

int main() {
    cin >> t;
    fill(&a[0][0],&a[0][0] + 51 * 51,0);
    fill(&visited[0][0],&visited[0][0] + 51 * 51,0);

    while(t--)
    {
        cin>>n >> m >> k;
        for(int i=0; i<k; i++)
        {
            cin >> x >> y;
            a[y][x] = 1;
        }
        ret = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(a[i][j] == 1 && !visited[i][j]){
                    dfs(i,j);
                    ret++;
                }
            }
        }
        cout << ret << "\n";

    }




    return 0;
}