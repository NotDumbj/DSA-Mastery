#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n <= 0){
        cout << "Not Prime";
    }
    else{
        int count=0;
        for (int i = n; i > 0; i--){
            if(n%i==0){
                count++;
            }
        }
        if(count == 2){
            cout << "Prime";
        }
        else{
            cout << "Not Prime";
        }
    }

    return 0;
}