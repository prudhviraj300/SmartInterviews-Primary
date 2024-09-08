// Given 2 numbers, find their LCM and HCF.



// Note: Do not use any inbuilt functions / libraries for your main logic. Read about the Euclid Algorithm to solve the problem.

// Input Format

// The first line of input contains T - the number of test cases. It's followed by T lines, each containing 2 numbers A and B.



// Output Format

// For each test case, print their LCM and HCF separated by space, separated by a new line.



// Constraints

// 1 <= T <= 105

// 1 <= A,B <= 109



// Example

// Input

// 4

// 4 710

// 13 1

// 6 4

// 605904 996510762



// Output

// 1420 2

// 13 1

// 12 2

// 7740895599216 78



// Explanation



// Self Explanatory




#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b){
    while(b!=0){
        long long temp = b;
        b = a%b;
        a=temp;
    }
    return a;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;
    while(t--){
        long long n,m;
        cin >> n >> m;
        long long ans;
        ans = gcd(n,m);
        cout << (n*m)/ans << " "<< ans << endl;
    }   
    return 0;
}
