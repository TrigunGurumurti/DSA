#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, int> pr1 = {1, 2};
    cout << pr1.first << " " << pr1.second << endl; // 1 2

    pair<int, char> pr2 = {3, 'a'};
    cout << pr2.first << " " << pr2.second << endl; // 3 a

    pair<pair<int, char>, int> pr3 = {{4, 'b'}, 5};
    cout << pr3.first.first << " " << pr3.first.second << " " << pr3.second; // 4 b 5
    return 0;
}