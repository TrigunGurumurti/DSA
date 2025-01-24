#include<bits/stdc++.h>
using namespace std;

int main()
{
    // underlying data structure is heap

    // max heap -> stores the largest element at the top
    priority_queue<int> pq;
    pq.push(5);
    pq.push(2);
    pq.push(10);
    pq.push(8);

    cout << pq.top() << "\n"; // 10
    pq.pop(); // 10 gets poped

    while(pq.empty() == false)
    {
        cout << pq.top() << " "; // 8 5 2
        pq.pop();
    }
    cout << endl;
 
    // min heap -> stores the smallest element at the top
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