#include<bits/stdc++.h>
using namespace std;

void explainunorderedSet()
{
    // stores unique elements but not in sorted order

    unordered_set<int>st;
    st.insert(2);
    st.insert(1);
    st.insert(1);
    st.insert(2);
    st.insert(4);
    st.insert(3);

    for(auto it : st)
    {
        cout << it << " "; 
    }
}    

int main()
{
    explainunorderedSet();
    return 0;
}