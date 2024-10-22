#include<bits/stdc++.h>
using namespace std;

void explainPair()
{
    pair<int, int>pr1 = {1,2};
    cout<<pr1.first<<" "<<pr1.second<<endl; // 1 2

    pair<int, char>pr2 = {3,'t'};
    cout<<pr2.first<<" "<<pr2.second<<endl; // 3 t

    pair<pair<int, int>, int>pr3 = {{4,5},6};
    cout<<pr3.first.first<<" "<<pr3.first.second<<" "<<pr3.second; // 4 5 6
}

int main()
{
    explainPair();
    return 0;
}