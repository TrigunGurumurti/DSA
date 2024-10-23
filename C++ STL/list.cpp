#include<bits/stdc++.h>
using namespace std;

void explainList()
{
    list<int>ls = {4,5};
    ls.push_front(3); // allows insertion at the front
    ls.push_front(2);
    ls.push_front(1);

    for(int i : ls)
    {
        cout<<i<<" "; // 1 2 3 4 5
    }
}

int main()
{
    explainList();
    return 0;
}