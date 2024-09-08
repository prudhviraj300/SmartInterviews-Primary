// Count the number of trailing 0s in the factorial of a given number.



// Input Format

// The first line of input contains T - the number of test cases. It is followed by T lines, each containing an integer N.



// Output Format

// For each test case, print the number of trailing 0s in N!, separated by a new line.



// Constraints

// 1 <= T <= 10000

// 1 <= N <= 1015



// Example

// Input

// 3

// 2

// 5

// 100



// Output

// 0

// 1

// 24



// Explanation



// 2! = 2 [No trailing zeros]

// 5! = 120 [Trailing zeros=1]





#include <bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        if(n<0){
            cout << "0" << endl;
            return 0;
        }
        long long c =0;
        while(n>=5){
            n /= 5;
            c = c + n;
        }
        cout << c << endl;
    }   
    return 0;
}




