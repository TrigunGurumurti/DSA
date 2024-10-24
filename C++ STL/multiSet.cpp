#include<bits/stdc++.h>
using namespace std;

void  explainmultiSet()
{
    // stores elements ( even the duplicates ) in ascending order

    multiset<int>ms;
    ms.insert(2);
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(4);
    ms.insert(3);

    for(auto it : ms)
    {
        cout <<it << " "; // 1 1 2 2 3 4
    }
    cout << endl;

    cout << ms.count(1); // 2  
}

int main()
{
    explainmultiSet();
    return 0;
}