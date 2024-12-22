#include<bits/stdc++.h>
using namespace std;

int main()
{
    // FIFO (First in first out)
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);

    while(q.empty() == false)
    {
        cout << q.front() << " "; // 1 2 3
        q.pop();
    }
    return 0;
}