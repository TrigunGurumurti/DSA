#include<bits/stdc++.h>
using namespace std;

int main()
{
    // stores key value pairs according to ascending order of keys
    map<int, string> mpp;
    mpp.insert({4, "Deepak"});
    mpp[1] = "Trigun";
    mpp[2] = "Ashok";
    mpp[3] = "Praveen";

    for(auto it : mpp)
        cout << it.first << "->" << it.second << endl;

    auto it = mpp.find(3);
    cout << (*it).first << "->" << (*it).second << endl;
    return 0;

    // unordered map -> stores key value pairs but not in sorted order
}