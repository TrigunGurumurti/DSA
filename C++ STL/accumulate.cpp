#include<bits/stdc++.h>
using namespace std;

void explainAccumulate()
{
    int arr[5] = {6, 2, 1, 7, 8};
    cout << accumulate(arr, arr+5, 0); // 24
}

int main()
{
    explainAccumulate();
    return 0;
}