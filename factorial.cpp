/*
 * C++ program to compute factorial of a given integer
 */
 
#include<iostream>
using namespace std;
 
int main()
{
    int fac;
    long long val = 1;
 
    cin >> fac;
    cout << endl;
    for (int i = 2; i <= fac; i++)
        val = val * i;
    cout << "The factorial of " << fac << " is " << val << endl;
 
    return 0;
}
