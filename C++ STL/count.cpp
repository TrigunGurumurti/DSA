#include<bits/stdc++.h>
using namespace std;

void explainCount()
{
    int arr[5] = {6, 2, 2, 8, 2};
    int num = 2;
    cout << count(arr, arr+5, num); // 3
}

int main()
{
    explainCount();
    return 0;
}