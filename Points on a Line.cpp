// Given 3 points on a 2D plane, check if they can be connected by using a single straight line.



// Input Format

// First line of the input contains T - the number of test cases. Its followed by 3T lines, each line contains 2 integers x and y, representing the coordinates of the 3 points respectively.



// Output Format

// For each test case, print "Yes" if they can be connected by using a single straight line, print "No" otherwise, separated by newline.



// Constraints

// 1 <= T <= 105

// -106 <= x,y <= 106



// Example

// Input

// 1

// 1 1

// 2 2

// 3 3



// Output

// Yes



// Explanation



// Self Explanatory





#include <bits/stdc++.h>
using namespace std;
bool collinear(long long x1,long long y1,long long x2,long long y2,long long x3,long long y3){
    return (x1*(y2-y3))+(x2*(y3-y1))+(x3*(y1-y2)) == 0;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    cin >> t;
    while(t--){
        long long x1,x2,x3,y1,y2,y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        if(collinear(x1,y1,x2,y2,x3,y3)){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }  
    return 0;
}
