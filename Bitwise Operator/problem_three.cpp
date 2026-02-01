#include<iostream>
using namespace std;

int main(){

    int num[] = {5, 3, 10, 6, 2};
    int size = sizeof(num) / sizeof(int);

    cout << "Original array: ";
    for(int i=0; i<size; i++){
        cout << num[i] << " ";
    }
    cout << endl;

    cout << "Changing the original array..." << endl;
    int start = 0;
    int end = size - 1;
    while(start < end){
        swap(num[start], num[end]);
        start++;
        end--;
    }

    cout << "Modified array: ";
    for(int i=0; i<size; i++){
        cout << num[i] << " ";
    }
    cout << endl;

    return 0; 
}