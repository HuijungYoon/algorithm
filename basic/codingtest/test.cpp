#include <bits/stdc++.h>
using namespace std;
int k = 5, r = 3;

void print(vector<int> b) {
    for(int i : b) {
        cout << i << " ";
    }
    cout << "\n";
}

void combi(int start, vector<int> b) {
    if(b.size() == r) {
        print(b);
        return;
    }
    for(int i = start + 1; i<k; i++) {
        b.push_back(i);
        combi(i,b);
        b.pop_back();
    }
}

int main() {
    vector<int> b;
    combi(-1,b);



    return 0;
}
