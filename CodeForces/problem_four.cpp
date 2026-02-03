#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    string s[n];

    for (int i=0; i<n; i++){
        cin >> s[i];
        if (s[i].length() > 10){
            string abbr = s[i][0] + to_string(s[i].length() - 2) + s[i][s[i].length() - 1];
            cout << abbr << endl;
        } else {
            cout << s[i] << endl;
        }
    }   
    return 0;
}