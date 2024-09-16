#include<bits/stdc++.h>
using namespace std;
int main()
{
    // Optimal Solution
    int n;
    cin>>n;
    int nums[n];
    for(int i=0;i<=n-1;i++)
    {
        cin>>nums[i];
    }
    int currSum=0;
    int maxSum=INT_MIN;
    for(int val:nums)
    {
        currSum+=val;
        maxSum=max(currSum,maxSum);
        if(currSum<0)
        {
            currSum=0;
        }    
    }
    cout<<"Max Subarray sum = "<<maxSum;
    return 0;
}