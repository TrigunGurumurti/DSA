#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int> ls;
    ls.push_front(3); // allows us to push the elements at the front
    ls.push_front(2);
    ls.emplace_front(1);

    for(auto it : ls)
        cout << it <<" "; // 1 2 3
    return 0;
}

// underlying data structure for vector is dynamic array

// underlying data structure for list and deque is linkedlist