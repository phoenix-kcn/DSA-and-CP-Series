#include<iostream>
using namespace std;

int main() {
    int a;
    cin >> a; 

    if (a == 0){
        cout << "Enter any non-zero integer." << endl;
    }
    else if (a < 0)
    {
        cout << "Enter a positive integer." << endl;
    }
    else {
        int result = a & (a - 1);
        if (result ==0) {
            cout << a << " is a power of two." << endl;
        }
        else {
            cout << a << " is not a power of two." << endl;
        }
    }
    
    return 0;
}