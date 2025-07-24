#include<iostream>
using namespace std;

// i could initialize both max and min from arr[0]

int max(int arr[], int n){
    int max=0;
    for(int i=0;i<n;i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max; 
}

int min(int arr[], int n){
    int min=100;
    for(int i=0;i<n;i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    return min; 
}

int main()
{
    int arr[100];
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "Max: " << max(arr, n) << endl;;
    cout << "Min: " << min(arr, n);
    return 0;
}   