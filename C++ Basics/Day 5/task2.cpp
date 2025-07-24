#include<iostream>
using namespace std;

bool linear_search(int arr[], int n, int x){
    for (int i = 0; i < n; i++)
    {
        if(x==arr[i]){
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[10] ={0,1,2,3,4,5,6,7,8,9};
    int x;
    cin >> x;
    if(linear_search(arr, 10, x)){
        cout << "Found";
    }
    else{
        cout << "Not Found";
    }
    return 0;
}