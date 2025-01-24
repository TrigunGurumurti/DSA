#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, int> pr1 = {1, 2};
    cout << pr1.first << " " << pr1.second << endl; // 1 2

    pair<int, int> pr2 = make_pair(3,4);
    cout << pr2.first << " " << pr2.second << endl; // 3 4

    pair<int, char> pr3 = {5, 'a'};
    cout << pr3.first << " " << pr3.second << endl; // 5 a

    pair<pair<int, char>, int> pr4 = {{6, 'b'},7};
    cout << pr4.first.first << " " << pr4.first.second << " " << pr4.second; // 6 b 7
    return 0;
}