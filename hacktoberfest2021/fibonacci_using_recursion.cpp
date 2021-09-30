#include<iostream>
using namespace std;

/*
Task:
1. WAP tp print fibonacci series till n using recursion
*/
int fibonacci(int n)
{
  if (n == 0 || n == 1)
    return n;
  else
    return (fibonacci(n-1) + fibonacci(n-2));
}

int main(){
    int n, m= 0, i;
    cout<<"Enter the number of terms: "; 
    cin>>n;

    cout<<"Fibonacci Series: ";
    for (i = 1; i <= n; i++)
    {
        cout<<" "<<fibonacci(m);
        m++;
    }
    
  return 0;
}
