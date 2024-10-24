#include<bits/stdc++.h>
using namespace std;

void  explainNextPermutation()
{
    string str = "abc";
    do
    {
        cout << str << endl;
    } while( next_permutation(str.begin(), str.end()) );
    cout << endl;
}

void  explainPrevPermutation()
{
    string str = "bac";
    do
    {
        cout << str << endl;
    } while( prev_permutation(str.begin(), str.end()) );
}

int main()
{
    explainNextPermutation();
    explainPrevPermutation();
    return 0;
}