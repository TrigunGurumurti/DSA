#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.emplace_back(4);  

    cout << vec.size() << endl; // 4

    // iterator
    auto beginItr = vec.begin(); // points to the first element
    auto endItr = vec.end(); // points after the last element

    for(auto i = beginItr; i <= endItr-1; i++)
        cout << *i << " "; // 1 2 3 4

    cout << endl;

    // for each loop
    for(auto i : vec)
        cout << i << " "; // 1 2 3 4

    cout << endl;

    cout << vec.front() << endl; // 1
    vec.pop_back(); // 4 gets poped
    cout << vec.back() << endl; // 3

    vector<int> vec1 = {5, 6, 7};
    vector<int> vec2 = {8, 9, 10};
    swap(vec1, vec2);
    for(auto it : vec1)
        cout << it << " "; // 8 9 10
    
    cout << endl;
    
    vec1.insert(vec1.begin() + 1, 11);
    for(auto it : vec1)
        cout << it << " "; // 8 11 9 10
    return 0;
}