#include <bits/stdc++.h>
using namespace std;

//중복을 허용하지않는다.
//pair나 int형을 집어넣어서 만들수있다.
//중복된값은 제거 map과 같은자동정렬


int main() {
    set<pair<string, int>> st;
    
    st.insert({"test",1});
     st.insert({"test",1});
      st.insert({"test",1});
       st.insert({"test",1});
       cout << st.size() << "\n";
       set<int> st2;
       st2.insert(2);
       st2.insert(1);
       st2.insert(2);

       for(auto it : st2) {
        cout << it << "\n";
       }


    return 0;
}