#include<bits/stdc++.h>
using namespace std;

void explainStack()
{
    stack<int>st;
    st.push(3);
    st.push(2);
    st.push(1);

    cout<<st.top()<<" "; // 1
    st.pop(); // deletes 1 from the stack
    cout<<st.top()<<" "; // 2
    st.pop(); // deletes 2 from the stack
    cout<<st.top()<<endl; // 3


    // Using while loop to get the elements printed
    stack<int>s;
    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);

    while(s.empty() == false)
    {
        cout<<s.top()<<" "; // 1 2 3 4 5
        s.pop();
    }
}

int main()
{
    explainStack();
    return 0;
}