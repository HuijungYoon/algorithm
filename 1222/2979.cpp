#include<bits/stdc++.h>
using namespace std;

int arr[100],cnt[100];
int A,B,C;
int a,b;
int sum =0;

int main() {
    cin >> A >> B >> C;

    for(int i=0; i<3; i++)
     {
        cin >> a >> b;

        for(int i =a; i<b; i++)
        {
            arr[i] = i;
            if(arr[i]) cnt[i] ++;
        }
    }
    
    for(int i=0; i<100; i++){
        
        if(cnt[i] == 1){
            sum += (1 * A);
        }
        else if(cnt[i] == 2){
            sum += (2 * B);
        }
        else if(cnt[i] ==3) {
            sum += (3 * C);
        } 
    }
     cout << sum << "\n";
return 0;
}