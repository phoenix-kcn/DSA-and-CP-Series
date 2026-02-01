#include <iostream>
#include <cassert> // Required for test assertions
#include <algorithm> // Required for std::swap (if not using namespace std)

using namespace std;

// 1. Refactored Logic: Extracted into a function
// We must pass 'size' because raw arrays lose their size info when passed to functions
void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

// Helper function to check equality between two arrays (for assertions)
bool areArraysEqual(int arr1[], int arr2[], int size) {
    for(int i = 0; i < size; i++) {
        if(arr1[i] != arr2[i]) return false;
    }
    return true;
}

int main(){

    // --- TEST CASE 1: Standard Odd Length (Your original case) ---
    // Input: {5, 3, 10, 6, 2} -> Expected: {2, 6, 10, 3, 5}
    {
        int num[] = {5, 3, 10, 6, 2};
        int expected[] = {2, 6, 10, 3, 5};
        int size = 5;
        
        reverseArray(num, size);
        assert(areArraysEqual(num, expected, size));
        cout << "Test Case 1 Passed: Standard Odd Length" << endl;
    }

    // --- TEST CASE 2: Standard Even Length ---
    // Checks if the two pointers meet correctly without overlapping
    // Input: {1, 2, 3, 4} -> Expected: {4, 3, 2, 1}
    {
        int num[] = {1, 2, 3, 4};
        int expected[] = {4, 3, 2, 1};
        int size = 4;

        reverseArray(num, size);
        assert(areArraysEqual(num, expected, size));
        cout << "Test Case 2 Passed: Standard Even Length" << endl;
    }

    // --- TEST CASE 3: Single Element ---
    // Edge Case: Start and End are the same index. Loop shouldn't run.
    // Input: {99} -> Expected: {99}
    {
        int num[] = {99};
        int expected[] = {99};
        int size = 1;

        reverseArray(num, size);
        assert(areArraysEqual(num, expected, size));
        cout << "Test Case 3 Passed: Single Element" << endl;
    }

    // --- TEST CASE 4: Negative Numbers ---
    // Ensures logic handles values regardless of sign.
    // Input: {-5, -1, -10} -> Expected: {-10, -1, -5}
    {
        int num[] = {-5, -1, -10};
        int expected[] = {-10, -1, -5};
        int size = 3;

        reverseArray(num, size);
        assert(areArraysEqual(num, expected, size));
        cout << "Test Case 4 Passed: Negative Numbers" << endl;
    }

    // --- TEST CASE 5: Already Palindrome (Symmetric) ---
    // The array reads the same forward and backward.
    // Input: {1, 2, 1} -> Expected: {1, 2, 1}
    {
        int num[] = {1, 2, 1};
        int expected[] = {1, 2, 1};
        int size = 3;

        reverseArray(num, size);
        assert(areArraysEqual(num, expected, size));
        cout << "Test Case 5 Passed: Palindrome Array" << endl;
    }

    // --- TEST CASE 6: Empty Array ---
    // Edge Case: Size is 0. Loop condition (0 < -1) is false immediately.
    // Input: {} -> Expected: {}
    {
        int num[] = {}; 
        int expected[] = {};
        int size = 0;

        reverseArray(num, size);
        // Assert passes if no crash occurs and memory remains safe
        assert(areArraysEqual(num, expected, size));
        cout << "Test Case 6 Passed: Empty Array" << endl;
    }

    cout << "------------------------" << endl;
    cout << "All test cases passed successfully!" << endl;

    return 0; 
}