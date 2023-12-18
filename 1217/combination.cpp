#include<bits/stdc++.h>
using namespace std;

int n = 5, k=3;

void print(vector<int> b)
{
    for(auto it : b)
    {
        cout << it << " ";
    }
    cout << "\n";
    return;
}

void combi(int start,vector<int> b)
{
    if(b.size() == 3)
    {
        print(b);
        return ;
    }
    for(int i = start + 1; i<n; i++)
    {
        b.push_back(i);
        combi(i,b);
        b.pop_back();
    }
}


void combiByfor() {

    for(int i =0; i<n; i++)
    {
        for(int j = i + 1; j<n; j++)
        {
            cout << i << " " << j << "\n";
        }
    }
   

}




int main() {
    vector<int> b;
    combiByfor();
    combi(-1,b);



    return 0;
}