#include<iostream>
#include<math.h>
#include <cmath>
using namespace std;

int main(){
    int a;

    cout << "Enter a number: " << endl;
    cin >> a;

    int count = 0;
    int sum = 0;
    int divisor = 10;

    int temp = a;

    if (a == 0){
        count = 1;
    } else{
        while (temp != 0){
            temp = temp / 10;
            count++;
        }

        for(int i=1; i<=count; i++){
            int num = (((a % (int)(pow(10, i) + 0.5)) - (a % (int)(pow(10, i-1) + 0.5))) / (int)(pow(10, i - 1) + 0.5) ) * (int)(pow(10, count - i) + 0.5);
            sum += num;
        }
    }

    cout << "The Inversed Number is: " << sum << endl;

    return 0;
}