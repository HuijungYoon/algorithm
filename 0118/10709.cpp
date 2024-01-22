#include<bits/stdc++.h>
using namespace std;

string a[104][104];
int h,w,cnt,ret[104][104];
string s;
bool flag;

int main() {
    cin >> h >> w;

    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            cin >> s;
            a[i][j] = s; 
        }
    }

    for(int i=0; i<h; i++){
        flag = 0;
        for(int j=0; j<w; j++){
            if(a[i][j] == "c"){
                cnt = 0;
                flag = 1;
                ret[i][j] = cnt;

            }
            if(flag && a[i][j] == "."){
                cnt++;
                ret[i][j] = cnt;

            } else if(!flag) {
                flag = 0;
                ret[i][j] = -1;

            }
        }
    };

    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            cout << ret[i][j] << " ";
        }
        cout << "\n";
    }


return 0;
}