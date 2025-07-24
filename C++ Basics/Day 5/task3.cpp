#include<iostream>
using namespace std;

bool binary_search(int arr[], int n, int x){
    int low=0, high=n-1;
    while(low<=high){
        int mid = (low+high)/2;  // using low + (high - low)/2 works better for larger values
        if(arr[mid]==x){
            return true;
        }
        else if (x > arr[mid])
        {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return false;
}

int main()
{
    int arr[10] ={0,1,2,3,4,5,6,7,8,9};
    int x;
    cin >> x;
    if(binary_search(arr, 10, x)){
        cout << "Found";
    }
    else{
        cout << "Not Found";
    }
    return 0;
}