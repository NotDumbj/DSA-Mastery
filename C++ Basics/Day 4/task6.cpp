#include<iostream>
using namespace std;

string record = "";

void tracer(int n){
    cout << record << "fact(" << n << ")" << endl;
    if(n!=0){
        record += to_string(n) + " * ";
    }
}

int fact(int n){
    tracer(n);
    if(n==0){
        return 1;
    }
    return n * fact(n-1);
}

int main()
{
    int x;
    cin >> x;
    int result = fact(x);
    cout << record << "1 = " << result;
    return 0;
}