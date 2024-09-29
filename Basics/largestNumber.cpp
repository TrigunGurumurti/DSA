#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num1,num2,num3;
    cin>>num1>>num2>>num3;
    if(num1>num2) // num2 cannot be the largest
    {
        if(num1>num3)
        {
            cout<<num1<<" is the largest";
        }    
        else
        {
            cout<<num3<<" is the largest";
        }    
    }
    else // num1<num2 ( num1 cannot be the largest )
    {
        if(num2>num3)
        {
            cout<<num2<<" is the largest";
        }    
        else
        {
            cout<<num3<<" is the largest";
        }    
    }
    return 0;
}