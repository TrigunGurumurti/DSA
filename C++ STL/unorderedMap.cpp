#include<bits/stdc++.h>
using namespace std;

void explainunorderedMap()
{ 
    // stores key value pairs in unordered fashion
    unordered_map<int, string>mpp;
    mpp[1]="Trigun";
    mpp[2]="efgh";
    mpp[3]="abcd";
    mpp[4]="ijkl";

    for(auto it : mpp)
    {
        cout << it.first << "-> " << it.second << endl; 
    }
}    

int main()
{
    explainunorderedMap();
    return 0;
}