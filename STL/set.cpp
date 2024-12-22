#include<bits/stdc++.h>
using namespace std;

int main()
{
    // stores unique elements in ascending order
    set<int> st;
    st.insert(3);
    st.insert(1);
    st.insert(1);
    st.insert(2);

    for(auto it : st)
        cout << it << " "; // 1 2 3

    cout << endl;

    auto it = st.find(2);
    if(it != st.end())
        cout << *it; // 2

    cout << endl;

    cout << st.count(3) << endl; // 1

    auto i = st.end();
    i--;
    st.erase(i);

    for(auto i : st)
        cout << i << " "; // 1 2

    cout << endl;

    set<int> st1;
    st1.insert(12);
    st1.insert(11);
    st1.insert(211);
    st1.insert(21);

    // lower bound
    // returns an iterator that points to the element that is >= number given
    auto it1 = st1.lower_bound(11);
    cout << *it1; // 11

    cout << endl;

    // upper bound
    // returns an iterator that points to the element that is > number given
    auto it2 = st1.upper_bound(11);
    cout << *it2; // 12
    return 0;
}