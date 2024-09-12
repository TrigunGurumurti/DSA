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
    int left=0,right=n-1;
    while(left<right)
    {
        swap(nums[left],nums[right]);
        left++;
        right--;
    }
    for(int i=0;i<=n-1;i++)
    {
        cout<<nums[i]<<" ";
    }
    return 0;
}