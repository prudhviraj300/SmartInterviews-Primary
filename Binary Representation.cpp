// Given a positive integer, print its binary representation.



// Input Format

// The first line of input contains T - the number of test cases. It's followed by T lines, each line containing a single integer.



// Output Format

// For each test case, print a binary representation, separated by a new line.



// Constraints

// 1 <= T <= 10000

// 0 <= N <= 109



// Example

// Input

// 5

// 10

// 15

// 7

// 1

// 120



// Output

// 1010

// 1111

// 111

// 1

// 1111000



// Explanation



// Self Explanatory



#include <bits/stdc++.h>
using namespace std;
void bin(long long n){
    if(n==0){
        cout << '0' << endl;
        return;
    }
    int b[32];
    int i =0;
    while(n>0){
        b[i++] = n % 2;
        n /= 2;
    }
    for(int j=i-1;j>=0;j--){
        cout << b[j];
    }
    cout << endl;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        bin(n);        
    }
    
    return 0;
}
