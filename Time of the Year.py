# Given the number of seconds elapsed since the epoch [01-01-1970 00:00:00 Thursday], you need to find the current date, along with the day.



# Note: Do not use any inbuilt functions / libraries for your main logic.

# Input Format

# The first line of input contains T - the number of test cases. It's followed by T lines, each line contains the number of seconds elapsed since the epoch.



# Output Format

# For each test case, print the date in DD-MMM-YYYY format, followed by the day, separated by a new line.



# Constraints

# 1 <= T <= 10000

# 0 <= S <= 109



# Example

# Input

# 10

# 86399

# 86400

# 2592000

# 2678400

# 8639999

# 8640000

# 31535999

# 31536000

# 68169599

# 68169600



# Output

# 01-JAN-1970 Thursday

# 02-JAN-1970 Friday

# 31-JAN-1970 Saturday

# 01-FEB-1970 Sunday

# 10-APR-1970 Friday

# 11-APR-1970 Saturday

# 31-DEC-1970 Thursday

# 01-JAN-1971 Friday

# 28-FEB-1972 Monday

# 29-FEB-1972 Tuesday



# Explanation



# Self Explanatory







# Enter your code here. Read input from STDIN. Print output to STDOUT
from datetime import datetime,timedelta
def cal(s):
    epoch = datetime(1970,1,1)
    delta = timedelta(seconds = s)
    return (epoch+delta).strftime("%d-%b").upper()+(epoch+delta).strftime("-%Y %A")
for i in range(int(input())):
    s = int(input())
    print(cal(s))
