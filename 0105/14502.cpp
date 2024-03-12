#include<bits/stdc++.h>
using namespace std;
int a[10][10],visited[10][10],n,m,ret;
int dy[] = {-1,0,1,0};
int dx[] = {0,1,0,-1};
vector<pair<int,int>> viruslist,wallist;

void dfs(int y,int x){
    for(int i=0; i<4; i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(ny < 0 || ny >= n || nx < 0 || nx >= m || visited[ny][nx] || a[ny][nx] == 1) continue;
        visited[ny][nx] = 1;
        dfs(ny,nx);
    }
    return ;
}

int solve() {
    fill(&visited[0][0],&visited[0][0] + 10 * 10,0);
    for(pair<int,int> b : viruslist){
        visited[b.first][b.second] = 1;
        dfs(b.first,b.second);
    


int cnt = 0;
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        if(a[i][j] == 0 && !visited[i][j]) cnt++;
    }

    return cnt;
}
}
}


int main() {
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
            if(a[i][j] == 2) viruslist.push_back({i,j});
            if(a[i][j] == 0) wallist.push_back({i,j});
        }
    }

    for(int i=0; i<wallist.size(); i++){
        for(int j=0; j<i; j++){
            for(int k=0; k<j; k++){
                a[wallist[i].first][wallist[i].second] = 1;
                a[wallist[j].first][wallist[j].second] = 1;
                a[wallist[k].first][wallist[k].second] = 1;
               ret = max(ret,solve());
                a[wallist[i].first][wallist[i].second] = 0;
                a[wallist[j].first][wallist[j].second] = 0;
                a[wallist[k].first][wallist[k].second] = 0;

            }
        }
    }

    cout << ret << "\n";

    return 0;

}