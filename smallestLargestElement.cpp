#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int nums[n];
    for(int i=0;i<=n-1;i++)
    {
        cin>>nums[i];
    }
    int smallest=INT_MAX;
    int largest=INT_MIN;
    for(int i=0;i<=n-1;i++)
    {
        if(nums[i]<smallest) smallest=nums[i]; // OR smallest=min(nums[i],smallest);
        largest=max(nums[i],largest);
    }
    cout<<smallest<<" "<<largest;
}