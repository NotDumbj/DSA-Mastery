#include<iostream>
#include "task1.h"
#include "task2.h"
#include "task3.h"
using namespace std;

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << endl << arr[i] << " ";
    }
    
}


int main()
{
    int arr[100];
    int x;
    cout << "Input: ";
    cin >> x;
    cout << "Data: ";
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }
    cout << "\nSelect: \n1. Bubble Sort\n2. Selection Sort\n3. Insertion Sort\n\n";
    int choice;
    cin >> choice;

    switch (choice)
    {
        case 1:{
            BubbleSort bS;
            bS.sort(arr, x);
            printArray(arr, x);
            break;
        }
        case 2:{
            SelectionSort sS;
            sS.sort(arr, x);
            printArray(arr, x);
            break;
        }
        case 3:{
            InsertionSort iS;
            iS.sort(arr, x);
            printArray(arr, x);
            break;
        }
        
        default:
            break;
    }
    
    return 0;
}