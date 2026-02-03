/*
Problem Eleven: 
Write a Function to calculate the sum and product of all numbers in an array.
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

    cout << "Enter the operation you want to perform (sum/product): ";
    string operation;

    cin >> operation;

    int sum = 0;
    int product = 1;

    if(operation == "SUM" || operation == "sum"){
        for(int i = 0; i < n; i++){
            sum += arr[i];
        } 

        cout << "The sum of all elements in the array is: " << sum << endl;

    } else if(operation == "PRODUCT" || operation == "product"){
        for(int i = 0; i < n; i++){
            product *= arr[i];
        }

        cout << "The product of all elements in the array is: " << product << endl;

    } else {
        cout << "Invalid operation!" << endl;
        return 0;
    }
    
    return 0;

}