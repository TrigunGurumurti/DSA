#include<bits/stdc++.h>
using namespace std;

int main()
{
    // LIFO (Last in first out)
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    cout << st.size() << endl; // 4
    cout << st.top() << endl; // 4
    st.pop(); // 4 gets poped
    
    while(st.empty() == false)
    {
        cout << st.top() << " "; // 3 2 1
        st.pop();
    }
    return 0;
}