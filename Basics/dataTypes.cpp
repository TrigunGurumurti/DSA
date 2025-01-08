#include<bits/stdc++.h>
using namespace std;

int main()
{
    // range -> -10^9 to 10^9
    int number1 = INT_MAX;
    cout << number1 << endl; // 2147483647

    // range -> -10^12 to 10^12
    long number2 = 1000000000;
    cout << number2 << endl; // 1000000000

    // range -> -10^18 t0 10^18
    long long number3 = 1000000000000000000;
    cout << number3 << "\n"; // 1000000000000000000
    
    // can store till 7 decimal places
    float number4 = 4.2154678;
    cout << number4 << endl; // 4.21547

    // can store till 15 decimal places
    double number5 = 4.215467843523123;
    cout << number5; // 4.21547
    return 0;
}
