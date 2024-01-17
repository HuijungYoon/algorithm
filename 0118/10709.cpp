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
        for(int j=0; j<w; j++){
            if(a[i][j] == "c"){
                cnt = 0;
                flag = 1;
            }

        }
    }

//continue ....


return 0;
}