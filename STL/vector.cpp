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
    auto beginItr = vec.begin(); // auto -> vector<int>::iterator . points to the memory location of first element
    auto endItr = vec.end(); // points to the memory location after the last element

    for(auto i = beginItr; i <= endItr-1; i++)
        cout << *i << " "; // 1 2 3 4

    cout << endl;

    // reverse iterator
    auto reverseBegin = vec.rbegin(); // points to the memory location of last element
    auto reverseEnd = vec.rend(); // points to the memory location before first element

    for(auto i = reverseBegin; i <= reverseEnd-1; i++)
        cout << *i << " "; //  4 3 2 1

    cout << endl;
    
    // for each loop
    for(auto i : vec)
        cout << i << " "; // 1 2 3 4

    cout << endl;

    cout << vec.front() << endl; // 1
    vec.pop_back(); // 4 gets poped
    cout << vec.back() << endl; // 3

    vec.erase(vec.begin() + 1);
    for(auto i : vec)
        cout << i << " "; // 1 3
    
    cout << endl;

    vector<int> vec1 = {5, 6, 7};
    vector<int> vec2 = {8, 9, 10};
    swap(vec1, vec2);
    for(auto it : vec1)
        cout << it << " "; // 8 9 10
    
    cout << endl;

    vec1.insert(vec1.begin() + 1, 11);
    for(auto it : vec1)
        cout << it << " "; // 8 11 9 10

    vec1.clear(); // deletes all the elements present in vec1
    return 0;
}