# Given two numbers X and Y, find the number whose binary representation has its Xth and Yth bits set to 1 and remaining bits set to 0.



# Input Format

# The first line of input contains T - the number of test cases. It's followed by T lines. Each subsequent line contains two integers: X - the index of the first set bit and Y - the index of the second set bit, separated by a space.



# Output Format

# For each test case, print the number whose binary representation has its Xth and Yth bits set to 1 and the remaining bits set to zero, separated by a new line.

# Since this number can be very large, print the result % 1000000007.



# Constraints

# 30 points

# 1 <= T <= 100

# 0 <= X,Y <= 30



# 70 points

# 1 <= T <= 105

# 0 <= X,Y <= 105



# Example

# Input

# 3

# 4 3

# 5 0

# 15 30



# Output

# 24

# 33

# 73774585



# Explanation



# Test-Case 1

# The binary representation of the number that has bits at position 3 and 4 set is 11000 = 24



# Test-Case 2

# The binary representation of the number that has the bit at position 5 and 0 set is 100001 = 33



# Enter your code here. Read input from STDIN. Print output to STDOUT
t = int(input())
for i in range(t):
    x,y=map(int,input().strip().split())
    print(((1<<x)|(1<<y))%1000000007)
