#include<bits/stdc++.h>
using namespace std;

bool InternalComparator(int el1, int el2)
{
    if(el1 < el2) return false;
    return true;
}

int main()
{
    int arr[]={5, 6, 1, 2};
    sort(arr, arr+4, InternalComparator);
    for(int i=0; i<4; i++)
    {
        cout << arr[i] << " "; // 6 5 2 1
    }
    return 0;
}
