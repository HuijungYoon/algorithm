#include<bits/stdc++.h>
using namespace std;

//시계방향으로 움직이게하기
// 정시계방향 -> ex) {1,2,3,4,5,6} -> {6,1,2,3,4,5};
// 반시계방향 -> ex) {1,2,3,4,5,6} -> {2,3,4,5,6,1};


//2차원배열 90도로 돌리기
//ex) a={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
const int n = 3;
 const int m = 4;


// void rotate_left_90degree(vector<vector<int>> &key) {

//     vector<vector<int>> temp(m,vector<int>(n,0));

//     for(int i=0; i<m; i++)
//     {
//         for(int j=0; j<n; j++)
//         {
//             temp[i][j] = key[j][m-i-1];
//         }
//     }
//     key.resize(m);
//     key[0].resize(n);
//     key = temp;
// return;

// }

void rotate_right_90degree(vector<vector<int>> &key) {
    // int n = key.size();
    // int m = key[0].size();

   vector<vector<int>> temp(m,vector<int>(n,0));

   for(int i=0; i<m; i++)
   {
    for(int j=0; j<n; j++)
    {
        temp[i][j] = key[n-j-1][i];
    }
 
   }
    key.resize(m);
    key[0].resize(n);
    key =temp;
    return;

// int n = key.size();
// int m = key[0].size();
// vector<vector<int>> temp(m, vector<int>(n, 0));
// for(int i = 0; i < m; i++){ for(int j = 0; j < n; j++){
//             temp[i][j] = key[n - j - 1][i];
//         }
//     }
//     key.resize(m);
//     key[0].resize(n);
// key = temp;
// return;

}




int main() {
  //  vector<int> v = {1,2,3,4,5,6};
  
  //{2,3,4,5,6,1} 정시계방향
  // rotate(v.begin(), v.end(),v.end());

  //{1,3,4,5,2,6} 중간에 숫자만 움직이게
  //rotate(v.begin()+1,v.begin()+2,v.begin()+5);

  //{6,1,2,3,4,5} 반시계방향
  // rotate(v.rbegin(),v.rbegin()+1,v.rend());

  //손코딩
  // {1,3,4,5,2,6}
//   int i = 0;
//   int temp = v[i+1]; // 2
//   v[i+1] = v[i+2]; // 1 3
//   v[i+2] = v[i+3]; // 1,3,4
//   v[i+3] = v[i+4]; //1,3,4,5
//   v[i+4] = temp;

//2차원배열 왼쪽으로 90도
vector<vector<int>> a = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
//rotate_left_90degree(a);
rotate_right_90degree(a);

for(int i=0; i<m; i++)
{
for(int j=0; j<n; j++)
{
    cout << a[i][j] << " ";
}
cout << "\n";
}


cout << "\n";



  
    // for(int i : v) cout << i << "  " ;
    // cout << "\n";


    return 0;
}