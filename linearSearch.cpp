#include<bits/stdc++.h>
using namespace std;

int linearSearch(int nums[],int n,int target)
{
    for(int i=0;i<=n-1;i++)
    {
        if(nums[i]==target) return i;
    }
}

int main()
{
    int n;
    cin>>n;
    int nums[n];
    for(int i=0;i<=n-1;i++)
    {
        cin>>nums[i];
    }
    int target;
    cin>>target;
    int ls=linearSearch(nums,n,target);
    cout<<ls;
    return 0;
}