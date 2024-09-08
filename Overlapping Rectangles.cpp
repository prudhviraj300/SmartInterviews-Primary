// Given 2 rectangles parallel to coordinate axes, find the area covered by them.



// Input Format

// The first line of input contains T - the number of test cases. It is followed by 2T lines. The first line of each test case contains 4 integers - xbl, ybl, xtr, ytr - the bottom-left and top-right coordinates of rectangle-1. The second line of each test case contains 4 integers - xbl, ybl, xtr, ytr - the bottom-left and top-right coordinates of rectangle-2.



// Output Format

// For each test case, print the area covered by the 2 rectangles, separated by a newline.



// Constraints

// 1 <= T <= 10000

// -106 < x,y <= 106

// (xbl, ybl) < (xtr, ytr)



// Example

// Input

// 4

// 2 5 4 6

// 1 2 5 4

// -4 -3 -2 5

// -3 -5 1 3

// 1 0 3 5

// 2 3 5 8

// -2 2 4 4

// -3 1 5 5



// Output

// 10

// 42

// 23

// 32



// Explanation



// Self Explanatory




#include <bits/stdc++.h>
using namespace std;
long long area(long long a,long long b){
    return a*b;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin >> t;
    while(t--){
        long long a1,b1,a2,b2,A1,B1,A2,B2;
        cin >> a1>>b1>>a2>>b2>>A1>>B1>>A2>>B2;
        long long area1 =  area(abs(a1-a2),abs(b1-b2));
        long long area2 =  area(abs(A1-A2),abs(B1-B2));
        long long x = min(a2,A2)-max(a1,A1);
        long long y = min(b2,B2)-max(b1,B1);
        long long common = 0;
        if(x>0 && y>0){
            common = area(x,y);
        }
        cout << area1 + area2 - common << endl;
    } 
    return 0;
}
