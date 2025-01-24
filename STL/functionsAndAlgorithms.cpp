#include<bits/stdc++.h>
using namespace  std;

void explainSort()
{
    int arr[5] = {6, 2, 1, 7, 0};
    sort(arr, arr + 5);
    for(int i = 0; i <= 4; i++)
        cout << arr[i] << " "; // 0 1 2 6 7

    cout << "\n";

    vector<int> vec = {6, 2, 1, 7, 0};
    sort(vec.begin(), vec.begin() + 5);
    for(auto it : vec)
        cout << it << " "; // 0 1 2 6 7

    cout << "\n";
}

void explainAccumulate()
{
    int arr[5] = {6, 2, 1, 7, 0};
    cout << accumulate(arr, arr + 5, 0); // 16
    cout << "\n";
}

void explainCount()
{
    int arr[5] = {6, 2, 1, 1, 0};
    cout << count(arr, arr + 5, 1); // 2
    cout << "\n";
}

void explainFind()
{
    int arr[5] = {6, 2, 1, 1, 0};
    auto it = find(arr, arr + 5, 1);
    cout << *it; // 1
    cout << "\n";
}

void explainNextPermutation()
{
    string str = "abc";
    do
    {
        cout << str << "\n";
    } while(next_permutation(str.begin(), str.end()));
    cout << "\n";
}

void  explainPrevPermutation()
{
    string str = "cba";
    do
    {
        cout << str << endl;
    } while(prev_permutation(str.begin(), str.end()));
    cout << "\n";
}

void explainMaxMinElement()
{
    int arr[5] = {6, 2, 1, 7, 3};
    auto it = max_element(arr, arr + 5);
    cout << *it; // 7
    cout << "\n";

    int array[6] = {6, 2, 1, 7, 3, 4};
    auto i = min_element(array, array + 5);
    cout << *i; // 1
    cout << "\n";
}

void  explainReverse()
{
    int arr[5] = {6, 2, 1, 7, 3};
    reverse(arr, arr + 5);
    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << " "; // 3 7 1 2 6
    }
    cout << "\n";
}

bool internalComparator(int ele1, int ele2)
{
    if(ele1 < ele2)
        return false;
    else
        return true;
}

void  explainComparator()
{
    int arr[5] = {6, 2, 1, 7, 0};
    sort(arr, arr + 5, internalComparator);
    for(int i = 0; i <= 4; i++)
        cout << arr[i] << " "; // 7 6 2 1 0
}

int main()
{
    explainSort();
    explainAccumulate();
    explainCount();
    explainFind();
    explainNextPermutation();
    explainPrevPermutation();
    explainMaxMinElement();
    explainReverse();
    explainComparator();
    return 0;
}