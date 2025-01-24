#include<bits/stdc++.h>
using namespace std;

int main()
{
    // stores key value pairs (even the duplicates) according to ascending order of keys
    multimap<int, char> mpp;
    mpp.insert({3, 'b'});
    mpp.insert({1, 'a'});
    mpp.insert({1, 'b'});
    mpp.insert({1, 'a'});
    mpp.insert({2, 'a'});
    mpp.insert({2, 'a'});
    mpp.insert({2, 'b'});

    for(auto it : mpp)
        cout << it.first << " " << it.second << "\n";

    cout <<"\n";

    auto it = mpp.equal_range(2);
    for(auto i = it.first; i != it.second; i++)
        cout << (*i).first << " " << (*i).second << "\n";
    return 0;
}