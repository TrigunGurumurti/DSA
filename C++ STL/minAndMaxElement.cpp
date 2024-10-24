#include<bits/stdc++.h>
using namespace std;

void explainMaxElement()
{
    int arr[] = {7, 6, 5, 10, 9};
    auto it = max_element(arr, arr+5);
    cout << *it;
    cout << endl;
}

void explainMinElement()
{
    int arr[] = {7, 6, 5, 10, 9};
    auto it = min_element(arr, arr+5);
    cout << *it;
}

int main()
{
    explainMaxElement();
    explainMinElement();
    return 0;
}