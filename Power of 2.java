// Given a number, check if it is a power of 2.



// Input Format

// The first line of input contains T - the number of test cases. It's followed by T lines, each line containing a single positive integer.



// Output Format

// For each test case, print "True" or "False", separated by a new line.



// Constraints

// 1 <= T <= 10000

// 1 <= N <= 1018



// Example

// Input

// 5

// 1

// 8

// 10

// 25

// 512



// Output

// True

// True

// False

// False

// True



// Explanation



// Self Explanatory





import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Main. */
       Scanner sc = new Scanner(System.in);
        int t;
        long N ;
        t = sc.nextInt();
        for(int i=0;i<t;i++)
        {
            N = sc.nextLong();
            if((N & (N-1))==0)
            {
                System.out.println("True");

            }
            else
            {
                System.out.println("False");
            }
        }
    }
}
