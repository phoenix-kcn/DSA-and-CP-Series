/*
Problem Statement: 
Write a program to find the largest and smallest
 elements in an array along with their indices.
*/
#include<iostream>
#include<climits>
using namespace std;

int main(){

    int N;
    cout << "Enter the number of elements: ";
    cin >> N;

    int arr[N];

    cout << "Enter the elements: ";
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }

    int largest = INT_MIN;
    int smallest = INT_MAX;
    
    int largestIndex = -1;
    int smallestIndex = -1;

    for (int i = 0; i < N; i++){
        if(arr[i] > largest){
            largest = arr[i];
            largestIndex = i;
        }
        if(arr[i] < smallest){
            smallest = arr[i];
            smallestIndex = i;
        }
    }

    cout << "Largest element is " << largest << " at index " << largestIndex << endl;
    cout << "Smallest element is " << smallest << " at index " << smallestIndex << endl;

    return 0;
}