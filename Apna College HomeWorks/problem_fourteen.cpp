/*
Problem Statement:
Write a funciton to print intersection of two arrays.
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    cout << "Enter the size of the first array: ";
    int m;
    cin >> m;

    vector<int> array1(m);
    cout << "Enter the elements of the first array: ";
    for(int i = 0; i < m; i++){
        cin >> array1[i];
    }

    cout << "Enter the size of the second array: ";
    int n;
    cin >> n;

    vector<int> array2(n);
    cout << "Enter the elements of the second array: ";
    for(int j = 0; j < n; j++){
        cin >> array2[j];
    }

    vector<int> new_array;

    for(int x = 0; x < m; x++){
        int el = array1[x];
        for(int y = 0; y < n; y++){
            if(el == array2[y]){
                new_array.push_back(el);
            }
        }
    }

    for(int i: new_array){
        cout << i << " ";
    }

    return 0;
}