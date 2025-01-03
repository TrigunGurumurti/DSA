#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int> ls;
    ls.push_front(3);
    ls.push_front(2);
    ls.emplace_front(1);

    for(auto it : ls)
        cout << it <<" "; // 1 2 3
    return 0;
}

// underlying data structure for vector is array

// underlying data structure for list and deque is linkedlist