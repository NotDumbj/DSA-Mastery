#include<iostream>
using namespace std;

int counter(int arr[], int n, int x){
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if(x==arr[i]){
            count++;
        }
    }
    return count;
}

int main()
{
    int arr[28]={0,1,2,3,4,5,6,7,8,9,0,5,6,7,8,9,1,5,2,0,4,5,6,4,8,9,1,5};
    int x;
    cin >> x;
    int result = counter(arr, 28, x);
    cout << x << " appeared " << result << " times.";
    return 0;
}