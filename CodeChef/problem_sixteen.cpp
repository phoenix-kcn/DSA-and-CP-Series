/*
Problem Name: Take discount or Not

There are N items in a shop. You know that the price of the i-th item is Ai. Chef wants to buy all the N items.

There is also a discount coupon that costs X rupees and reduces the cost of every item by Y rupees. If the price of an item was initially <= Y, it becomes free, i.e., costs 0.

Determine whether Chef should buy the discount coupon or not. Chef will buy the discount coupon if and only if the total price he pays after buying the discount coupon is strictly less than the price he pays without buying the discount coupon.

Input Format:
- The first line of input will contain a single integer T, denoting the number of test cases. 
- The description of the test cases follows.
- The first line of each test case contains three space-separated integers — N, X, and Y.
- The second line contains N space-separated integers — A1, A2, ..., AN.

Output Format:
For each test case, output COUPON if Chef should buy the discount coupon, and NO COUPON otherwise.

Each letter of the output may be printed in either lowercase or uppercase. For example, the strings coupon, CouPoN, and COUPON will all be treated as equivalent.

Inputs: 5
        4 30 10
        15 8 22 6
        4 40 10
        15 8 22 6
        4 34 10
        15 8 22 6
        2 10 100
        60 80
        3 30 5
        50 60 50

Outputs:COUPON
        NO COUPON
        NO COUPON
        COUPON
        NO COUPON
*/

#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main(){
    cout << "Enter the number of testcases: ";
    int T;
    cin >> T;

    int X, Y;

    int original_cost = 0;
    int discount_cost = 0;

    int final_cost = 0;

    vector <int> N(T);
    vector <string> result;

    for(int i = 0; i < T; i++){
        cout << "Enter the Number of products discout coupon price and discout(N, X, Y): ";
        cin >> N[i];
        cin >> X;
        cin >> Y;

        int n = N[i];

        int original_cost = 0;
        int discount_cost = 0;
        int final_cost = 0;

        vector<int> price(n);
        cout << "Enter the prices of the product: ";
        for(int j = 0; j < n; j++){
            cin >> price[j];
        }

        

        for(int j = 0; j < n; j++){
            original_cost += price[j];
        }

        cout << "Original Cos: ";
        cout << original_cost << endl;

        for(int j = 0; j < n; j++){
            if(price[j] > Y){
                int x = price[j] - Y;
                discount_cost += x;
            }
        }

        cout << "Discount Price: ";
        cout << discount_cost << endl;
        
        final_cost = discount_cost + X;

        if(final_cost < original_cost){
            result.push_back("COUPON");
        } else {
            result.push_back("NO COUPON");
        }
        
    }

    for(const string& k: result){
        cout << k << endl;
    }

    return 0;
    
}