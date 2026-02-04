/*
Find Maximum in an Array

Given a list of N integers representing the heights of mountains, find the height of the tallest mountain.

Input:

The first line will contain T, the number of test cases.

For each test case:

The first line contains one integer, N.

The following line contains N space-separated integers representing the height of each mountain.

Output:

For each test case, output one line with one integer: the height of the tallest mountain.
*/

#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main(){
    cout << "Enter the number of testcases: ";
    int T;
    cin >> T;

    vector<int> N(T);
    vector<int> result;

    for(int i = 0; i < T; i++){
        cout << "Enter the size of the array: ";
        cin >> N[i]; 
        int n = N[i];

        vector<int> nums(n);
        int tallest = INT_MIN;

        cout << "Enter the values of the array: ";
        for(int j = 0; j < n; j++){
            cin >> nums[j];
        }

        for(int k = 0; k < n; k++){  
            if(nums[k] > tallest){   
                tallest = nums[k]; 
            }
        }
        result.push_back(tallest);
    }
    
    for(int i: result){
        cout << i << endl;
    }
}