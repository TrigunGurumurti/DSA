#include<bits/stdc++.h>
using namespace std;

int main()
{
    int age;
    cin>>age;
    if(age>=18)
    {
        cout<<"adult";
    }    
    else if(age>=10)
    {
        cout<<"Teen";
    }    
    else
    {
        cout<<"Child";
    }    
    return 0;
}