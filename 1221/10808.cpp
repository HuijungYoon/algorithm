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
        for(int i =A; i<B; i++)
        {
            arr[i] = i;
            if(arr[i]) cnt[i] ++;
        }
    }
    
    for(int i=0; i<100; i++){
        
        if(cnt[i] == 1){
            sum += 1*arr[i];
        }
        else if(cnt[i] == 2){
            sum += 2*arr[i];
        }
        else {
            sum += 3*arr[i];
        }
    }
return 0;
}