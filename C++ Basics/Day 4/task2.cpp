#include<iostream>
using namespace std;

int printer(int n, int i=1){
    if(i>n){
        return 0;
    }
    cout << i << " ";
    return printer(n, i+1);
}

int main()
{
    int n;
    cin >> n;
    printer(n);
    return 0;
}

