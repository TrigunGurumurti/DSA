#include<bits/stdc++.h>
using namespace std;

void pattern1(int n)
{
    for(int i = 1; i <= n; i++)
    {
        // spaces
        for(int j = 1; j <= n-i; j++)
            cout << " ";

        // stars
        for(int j = 1; j <= 2*i-1; j++)
            cout << "*";

        cout << endl;
    }
}

void pattern2(int n)
{
    for(int i = 1; i <= n; i++)
    {
        // spaces
        for(int j = 1; j <= i-1; j++)
            cout << " ";

        // stars
        for(int j = 2*n-(2*i-1); j >= 1; j--)
            cout << "*";
            
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;   
    pattern1(n);
    pattern2(n);
    return 0;
}