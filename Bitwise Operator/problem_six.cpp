#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int x = 0, new_x = 0;

    string operation;

    for (int i = 0; i < n; i++){
        cin >> operation;
        if (operation == "++X" || operation == "++x"){
            x = x + 1;
            // new_x = x;
        } else if (operation == "X++" || operation == "x++"){
            // new_x = x;
            x = x + 1;
        } else if (operation == "--X" || operation == "--x"){
            x = x - 1;
            // new_x = x;
        } else {
            // new_x = x;
            x = x - 1;
        }
    }
    cout << x << endl;
    return 0;
}

/*
Test: #7, time: 31 ms., memory: 0 KB, exit code: 0, checker exit code: 1, verdict: WRONG_ANSWER
Input
28
X--
++X
X++
X++
X++
--X
--X
X++
X--
++X
X++
--X
X--
X++
X--
++X
++X
X++
X++
X++
X++
--X
++X
--X
--X
--X
--X
X++
*/