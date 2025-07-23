#include<iostream>
using namespace std;

int count=0;

void counter(){
    count++;
    cout << count;
}

int main()
{
    for(int i=0; i<5; i++){
        counter();
    }
    return 0;
}
