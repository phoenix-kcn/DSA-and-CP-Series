#include<iostream>
using namespace std;

int main(){
    
    int num[] = {5, 3, 10, 6, 2};
    int reverse_num[5];

    int size = sizeof(num) / sizeof(int);

    cout << "Original array: ";
    for(int i=0; i<size; i++){
        cout << num[i] << " ";
    }
    cout << endl;
    
    for(int i=0; i<size; i++){
        int new_element = num[size - i - 1];
        reverse_num[i] = new_element;
    }

    cout << "Reversed array: ";
    for(int i=0; i<size; i++){
        cout << reverse_num[i] << " ";
    }
    cout << endl;

    return 0;
}