#include <bits/stdc++.h>
using namespace std;

stack<string> stk;

int main() {

    stk.push("엄");
     stk.push("준");
      stk.push("식");
       stk.push("화");
        stk.push("이");
         stk.push("팅");
          stk.push("!");
          while(stk.size())
          {
            cout << stk.top() << "\n";
            stk.pop();
          }

     



    return 0;
}