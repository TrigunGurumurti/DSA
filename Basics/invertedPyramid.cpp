#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        // space
        for(int j=1;j<i;j++)
        {
            cout<<" ";
        }

        // star
        for(int j=2*n-(2*i-1);j>=1;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}    