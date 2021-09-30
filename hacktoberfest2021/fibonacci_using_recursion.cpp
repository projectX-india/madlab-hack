#include<iostream>
using namespace std;

/*
Task:
1. WAP tp print fibonacci series till n using recursion
*/
void fibonacci(int n){
if (n <= 1)
        return n;
    return fib(n-1) + fib(n-2);

}
int main(){
    fibonacci(10);
    return 0;
}
