#include<bits/stdc++.h>
using namespace std;

int main()
{
    // LIFO (Last in first out)
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);

    cout << st.size() << endl; // 3
    cout << st.top() << endl; // 3
    st.pop(); // 3 gets poped
    
    while(st.empty() == false)
    {
        cout << st.top() << " "; // 2 1
        st.pop();
    }
    return 0;
}