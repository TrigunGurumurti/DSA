#include<bits/stdc++.h>
using namespace std;

void  explainSet()
{
    // stores unique elements in ascending order

    set<int>st;
    st.insert(3);
    st.insert(1);
    st.insert(2);
    st.insert(3);
    st.insert(5);
    st.insert(4);

    for(auto it : st)
    {
        cout <<it << " "; // 1 2 3 4 5
    }
    cout << endl;

    cout << st.count(3) << endl; // 1

    st.erase(2);
    for(auto it : st)
    {
        cout << it << " "; // 1 3 4 5
    }
    cout<<endl;

    // lower bound
    // returns an iterator that points to the first element that is >= number given
    auto it = st.lower_bound(3);
    cout << *it; // 3
    cout << endl;

    //upper bound
    // returns an iterator that points to the first element that is > number given
    auto i = st.upper_bound(2);
    cout << *i; // 3
    cout << endl;
}

int main()
{
    explainSet();
    return 0;
}