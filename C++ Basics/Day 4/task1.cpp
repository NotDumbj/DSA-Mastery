#include<iostream>
using namespace std;

int printerR(int n){
    if(n==0){
        return 0;
    }
    cout << n << " ";
    return printerR(n-1);
}

int main()
{
    int n;
    cin >> n;
    printerR(n);
    return 0;
}

