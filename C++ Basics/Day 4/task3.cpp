#include<iostream>
#include<string>
using namespace std;

int sumator(string d, int n, int i=0){
    if(i==n){
        return 0;
    }
    return (d[i] - '0') + sumator(d, n, i+1);
}

int main()
{
    string digits;
    cin >> digits;
    int len = digits.length();
    int result = sumator(digits, len);
    cout << result;
    return 0;
}