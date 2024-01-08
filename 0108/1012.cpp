#include<bits/stdc++.h>
using namespace std;
int dy[4] = {-1,0,1,0};
int dx[4] = {0,1,0,-1};
int a[51][51];
bool visited[51][51];
int n,m,k,x,y,ny,nx,t,ret;

void dfs(int y,int x)
{
    visited[y][x] = 1;
    for(int i=0; i<4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(ny<0 || nx <0 || ny>=n || nx>=m ) continue;
        if(!visited[ny][nx] && a[ny][nx] == 1)
        {
            dfs(ny,nx);
        }

    }
    return;
}




int main() {

    cin >> t;

    while(t--)
    {
        fill(&a[0][0],&a[0][0] + 51 * 51,0);
        fill(&visited[0][0],&visited[0][0] + 51 * 51,0);
        ret = 0;
        cin >> m >> n >> k;
        for(int i=0; i<k; i++)
        {
            cin >> x >> y;
            a[y][x] = 1;
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(a[i][j] == 1 && !visited[i][j])
                {
                    dfs(i,j);
                    ret++;
                }
            }
        }

        cout << ret << "\n";
    }




    return 0;
}
