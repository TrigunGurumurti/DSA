#include<bits/stdc++.h>
using namespace std;
int main()
{
    // Brute force approach
    int n;
    cin>>n;
    int nums[n];
    for(int i=0;i<=n-1;i++)
    {
        cin>>nums[i];
    }
    int maxSum=INT_MIN;
    for(int start=0;start<=n-1;start++)
    {
        int currSum=0;
        for(int end=start;end<=n-1;end++)
        {
            currSum+=nums[end];
            maxSum=max(currSum,maxSum);
        }
    }
    cout<<"Max subarray sum = "<<maxSum;
    return 0;
}