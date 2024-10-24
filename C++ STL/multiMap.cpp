#include<bits/stdc++.h>
using namespace std;

void explainmultiMap()
{
    // sorted according to the key
    multimap<int, char>mpp;
    mpp.insert({3,'t'});
    mpp.insert({3,'t'});
    mpp.insert({1,'r'});
    mpp.insert({2,'i'});
    mpp.insert({2,'g'});

    for(auto it : mpp)
    {
        cout << it.first << "-> " << it.second << endl; 
    }

    auto it = mpp.equal_range(2);
    for(auto i=it.first; i!=it.second; i++)
    {
        cout << (*i).first << "->" << (*i).second << endl;
    }
}    

int main()
{
    explainmultiMap();
    return 0;
}