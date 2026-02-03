/*
Problem Twelve:
Write a function to swap the maximum and minimum number in an array.
*/
#include <iostream>
using namespace std;

int main(){
    cout << "Enter the size of the array: ";
    int n;
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Without swaping this is the array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    } cout << endl;

    int maxIndex = 0;
    int minIndex = 0;

    for(int i = 1; i < n; i++){
        if(arr[i] > arr[maxIndex]){
            maxIndex = i;
        }
        if(arr[i] < arr[minIndex]){
            minIndex = i;
        }
    }
    swap(arr[maxIndex], arr[minIndex]);

    cout << "Swaped maximum and minimum number:";

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}