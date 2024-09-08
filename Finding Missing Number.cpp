// Given an array of size N, it contains all the numbers from 1 to N+1 inclusive, except one number. You have to find the missing number.



// Input Format

// The first line of input contains T - the number of test cases. It is followed by 2T lines, the first line of each test case contains N - size of the array and the next line contains N integers - the elements of the array.



// Output Format

// For each test case, print the missing number, separated by a new line.



// Constraints

// 1 <= T <= 500

// 1 <= N <= 10000

// 1 <= ar[i] <= N+1



// Example

// Input

// 3

// 8

// 1 2 7 9 5 6 3 8

// 7

// 3 5 8 1 4 7 2

// 10

// 8 11 10 2 7 4 3 5 1 6



// Output

// 4

// 6

// 9



// Explanation



// Self Explanatory




#include <bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;
    while(t--){
        int n,ans;
        long sum = 0;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
            sum += arr[i];
        }
        ans = (((n+1)*(n+2))/2)-sum;
        cout << ans << endl;

    }   
    return 0;
}
