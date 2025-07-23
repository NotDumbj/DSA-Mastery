#include<iostream>
using namespace std;

string even_odd(int x){
    if(x%2==0){
        return "Even";
    }
    else {
        return "Odd";
    }
}

int main()
{
    int x;
    cin >> x;
    string result = even_odd(x);
    cout << result;
    return 0;
}
