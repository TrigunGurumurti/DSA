#include<bits/stdc++.h>
using namespace std;

int main()
{
    // stores elements ( even the duplicates ) in ascending order
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(5);
    ms.insert(2);
    ms.insert(1);
    ms.insert(3);

    cout << ms.count(1) << "\n"; // 3 . returns the no of times the element has repeated

    for(auto it : ms)   
        cout << it << " "; // 1 1 1 2 3 5

    cout << "\n";

    auto it = ms.erase(ms.find(1));
    for(auto it : ms)   
        cout << it << " "; // 1 1 2 3 5

    cout << "\n";

    auto i = ms.erase(1);
    for(auto i : ms)   
        cout << i << " "; // 2 3 5
    return 0;
}