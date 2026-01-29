#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int a = 159;
    int count = 0;

    int temp = a;

    if (a == 0){
        count = 1;
    } else{
        while (temp != 0){
            temp = temp / 10;
            count++;
        }
    }

    float new_num = 0;

    cout << pow(10.0, 2) << endl;

    // for (int i = 1; i <= count; i++){
    //     float result = (a / pow(10, count - i)) % 10;
    //     new_num += result * pow(10, count - i);
    // }

    cout << "The new number is: " << new_num << endl;

    return 0;
}