#include<bits/stdc++.h>
using namespace std;

int main()
{
    // stores the highest element at the top
    // max heap
    priority_queue<int> pq;
    pq.push(5);
    pq.push(2);
    pq.push(10);
    pq.push(8);

    while(pq.empty() == false)
    {
        cout << pq.top() << " "; // 10 8 5 2
        pq.pop();
    }
    cout << endl;

    // min heap
    priority_queue<int, vector<int>, greater<int>> pq1;
    pq1.push(5);
    pq1.push(2);
    pq1.push(10);
    pq1.push(8);

    while(pq1.empty() == false)
    {
        cout << pq1.top() << " "; // 2 5 8 10
        pq1.pop();
    }
    return 0;
} 