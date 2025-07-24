#include<iostream>
using namespace std;

void uniqor(int arr[], int n){
    int count;
    for(int i=0;i<n;i++){
        count=0;
        for (int j = 0; j < n; j++)
        {
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count==1){
            cout << endl << arr[i];
        }
    }

}

int main()
{
    int arr[100];
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "Unique Elements: ";
    uniqor(arr, n);
    return 0;
}   