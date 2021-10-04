#include<iostream>
using namespace std;

/*
Task:
1. WAP tp print fibonacci series till n using recursion
*/

int fib(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}

int main()
{
    int num, f;
    cout << "Enter the number" << endl;
    cin >> num;
    f = fib(num);
    cout << f << endl;
    return 0;
}
