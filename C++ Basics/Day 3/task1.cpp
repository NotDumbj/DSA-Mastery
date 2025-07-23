#include<iostream>
using namespace std;

int maxOf3(int x, int y, int z){
    if (x >= y && x >= z){
        return x;
    }
    else if (y >= x && y >= z){
        return y;
    }
    else {
        return z;
    }
}

int main()
{
    int x,y,z;
    cin >> x >> y >> z;
    int maximum = maxOf3(x,y,z);
    cout << maximum;
    return 0;
}

