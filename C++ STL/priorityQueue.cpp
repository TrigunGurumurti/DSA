#include<bits/stdc++.h>
using namespace std;

void explainpriorityQueue()
{
    // max heap
    // stores the largest element at the top
    priority_queue<int>pq;
    pq.push(10);
    pq.push(30);
    pq.push(20);

    while(pq.empty() == false)
    {
        cout<<pq.top()<<" "; // 30 20 10
        pq.pop();
    }
    cout<<endl;

    // min heap
    // stores the smallest element at the top
    priority_queue<int, vector<int>, greater<int>>p;
    p.push(30);
    p.push(10);
    p.push(20);

    while(p.empty() == false)
    {
        cout<<p.top()<<" "; // 10 20 30
        p.pop();
    }
}

int main()
{
    explainpriorityQueue();
    return 0;
}