/*
Problem Statement:
Write a funciton to print all unique values in an array.
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    cout << "Enter the size of the array: ";
    int n;
    cin >> n;
    vector<int> nums(n);
    vector<int> unique_num;

    cout << "Enter the values of the array: ";
    for(int i = 0; i < nums.size(); i++){
        cin >> nums[i];
    }   

    sort(nums.begin(), nums.end());

    int unique_number = 0;

    for(int i = 1; i < n + 1; i++){
        if(nums[unique_number] != nums[i]) {
            unique_num.push_back(nums[unique_number]);
            unique_number += 1;
        } else {
            unique_number += 1;
        }
    }

    for(int i: unique_num){
        cout << i << " ";
    } 
    
    return 0;
}