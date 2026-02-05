#include<iostream>
using namespace std;
 
int main(){
    string a;
    cin >> a;
    
    int n = a.length();
    int count = 1;
    
    for(int i = 0; i < n + 1; i++){
        if (a[i] == a[i + 1]){
            count += 1;
            if(count >= 7){
                cout << "YES";
                return 0;
            }
        } else {
            count = 1;
        }
    }
    cout << "NO";
    return 0;
}