#include<iostream>
using namespace std;

int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fib(n-1) + fib(n-2);
}

int main()
{
    int x;
    cin >> x;
    for (int i=x-1;i>=0;i--){
        cout << fib(i) << " ";
    }
    return 0;
}