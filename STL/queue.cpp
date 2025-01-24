#include<bits/stdc++.h>
using namespace std;

int main()
{
    // FIFO (First in first out)
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout << q.size() << "\n"; // 4
    cout << q.front() << "\n"; // 1
    q.pop(); // 1

    while(q.empty() == false)
    {
        cout << q.front() << " "; // 2 3 4
        q.pop();
    }
    return 0;
}