#include<bits/stdc++.h>
using namespace std;

void  explainSort()
{
    int arr[5]={6, 2, 1, 7, 8};
    sort(arr,arr+5);

    for(int i=0;i<5;i++)
    {
        cout << arr[i] << " "; // 1 2 6 7 8
    }
    cout << endl;

    vector<int>vec={5, 7, 8, 8, 1};
    sort(vec.begin(),vec.end());

    for(auto it : vec)
    {
        cout << it << " "; // 1 5 7 8 8
    }
}

int main()
{
    explainSort();
    return 0;
}