#include<bits/stdc++.h>
using namespace std;

void  explainVector()
{
    vector<int>vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.emplace_back(4);

    cout<<vec.size()<<endl; // 4

    for(int i=0; i<=vec.size()-1; i++)
    {
        cout<<vec[i]<<" "; // 1 2 3 4
    }
    cout<<endl;

    // iterator
    vector<int>::iterator beginItr=vec.begin();
    cout<<*beginItr<<endl; // 1
    vector<int>::iterator endItr=vec.end()-1;
    cout<<*endItr; // 4
}

int main()
{
    explainVector();
    return 0;
}