#include<iostream>
using namespace std;

int sumator(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    int sum = sumator(n);
    cout << sum;
    return 0;
}
