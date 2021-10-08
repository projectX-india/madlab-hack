#include<iostream>
using namespace std;



int fib(int n)
{
    if (n <= 1)
    {
        return (n);
    }
    else
    {
        return (fib(n - 1) + fib(n - 2));
    }
}

int main()
{
    int num,i=0;
    cout << "Enter the number" << endl;
    cin >> num;
    while(i<num){
        cout<<" "<<fib(i);
        i++;
    }
    return 0;

}
