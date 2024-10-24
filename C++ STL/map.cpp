#include<bits/stdc++.h>
using namespace std;

void explainmap()
{ 
    // stores key value pairs in ascending order of key
    map<int, string>mpp;
    mpp[4]="Trigun";
    mpp[2]="efgh";
    mpp[1]="abcd";
    mpp[3]="ijkl";

    for(auto it : mpp)
    {
        cout << it.first << "-> " << it.second << endl; 
    }

    auto it = mpp.find(4);
    cout << (*it).first << " -> " << (*it).second << endl; // 4 -> Trigun 
}    

int main()
{
    explainmap();
    return 0;
}