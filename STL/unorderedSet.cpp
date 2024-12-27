#include<bits/stdc++.h>
using namespace std;

int main()
{
    // stores unique elements but not in sorted order
    // lower and upper bound cannot be applied because it is not in sorted order
    // has better time complexity
    unordered_set<int> st;
    st.insert(1);
    st.insert(2);
    st.insert(1);
    st.insert(11);
    st.insert(11);
    st.insert(12);
    st.insert(12);
    st.insert(12);

    for(auto it : st)
        cout << it << " ";
    return 0;
}