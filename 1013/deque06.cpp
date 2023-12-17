#include <bits/stdc++.h>
using namespace std;
//앞뒤로 삽입 삭제 참조가능한 자료구죠

int main() {
    deque<int> dq;
    dq.push_front(1);
    dq.push_back(2);
    dq.push_back(3);
    cout << dq.front() << "\n";  // 1
    cout << dq.back() << "\n"; // 3
    cout << dq.size() << "\n"; //3

    dq.pop_back(); // 12
    dq.pop_front(); // 2

    cout << dq.size() << "\n"; //1

    return 0;
}