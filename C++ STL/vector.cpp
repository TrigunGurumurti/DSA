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
    vector<int>::iterator endItr=vec.end();
    cout<<*--endItr<<endl; // 4
    for(vector<int>::iterator i=beginItr; i<=endItr; i++)
    {
        cout<<*i<<" "; // 1 2 3 4
    }
    cout<<endl;

    auto beginIt=vec.begin();
    auto endIt=vec.end();
    for(auto i=beginIt; i<endIt; i++)
    {
        cout<<*i<<" "; // 1 2 3 4
    }
    cout<<endl;

    // for each loop
    for(auto i : vec)
    {
        cout<<i<<" "; // 1 2 3 4
    }    
    cout<<endl;

    cout<<vec.front()<<endl; // 1
    cout<<vec.back()<<endl; // 4

    // swap
    vector<int>vec1={6,7};
    vector<int>vec2={8,9};
    swap(vec1,vec2);
    for(auto it : vec1)
    {
        cout<<it<<" "; // 8 9
    }
}

int main()
{
    explainVector();
    return 0;
}