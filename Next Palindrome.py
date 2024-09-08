# Given a number N, find the least palindromic number K, such that K>N.



# Input Format

# The first line of input contains T - the number of test cases. It's followed by T lines, each containing a single number N.



# Output Format

# Print the least palindromic number K for each test case, such as K>N, separated by a new line.



# Constraints

# 30 points

# 1 <= T <= 104

# 1 <= N <= 104



# 70 points

# 1 <= T <= 105

# 1 <= N <= 109



# Example

# Input

# 2

# 11

# 121



# Output

# 22

# 131



# Explanation



# Self Explanatory






def nextPal(n):
    n = str(n)
    l = len(n)
    if n =='9' * l:
        return str(int(n)+2)
    left = n[:l//2]
    middle = n[l//2] if l%2 else ''
    right = left[::-1]
    palin = int(left+middle+right)
    if palin > int(n):
        return str(palin)
    if middle != '9' and middle != '':
        return str(int(left+str(int(middle or '0') + 1)+right))
    else:
        left = str(int(left)+1)
        right = left[::-1]
        return left+('0' if middle else '') + right
for i in range(int(input())):
    n = int(input())
    res = nextPal(n)
    if res == str(n):
        n+=1
        res = nextPal(n)
    print(res)
