#include<bits/stdc++.h>
using namespace std;

int countDigit(int num)
{
    if(num==0) return 1;
    int count=log10(num)+1;
    return count;
}

int main()
{
    int num;
    cin>>num;
    cout<<countDigit(num);
    return 0;
}