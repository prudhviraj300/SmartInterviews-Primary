# Given the end points of 2 line segments, check if the line segments intersect.



# Input Format

# First line of input contains T - number of test cases. Its followed by 2T lines, the first line contains 4 integers Sx, Sy, Ex, Ey - end points of the first line segment and the second line contains the end points of the second line segment.



# Output Format

# For each test case, print "Yes" if the line segments intersect, print "No" otherwise, separated by newline.



# Constraints

# 1 <= T <= 105

# -100 <= Sx, Sy, Ex, Ey <= 100



# Example

# Input

# 2

# 1 1 5 5

# 1 2 4 3

# 1 1 5 5

# 1 2 4 5



# Output

# Yes

# No



# Explanation



# Self Explanatory




def orientation(p,q,r):
    val = (q[1] - p[1]) * (r[0] - q[0]) - (q[0] - p[0]) * (r[1] - q[1])
    if val == 0:
        return 0
    elif val > 0:
        return 1
    return 2
def on_segment(p,q,r):
    if min(p[0],r[0],) <= q[0] <= max(p[0],r[0]) and min(p[1],r[1]) <= (q[1]) <= max(p[1],r[1]):
        return True
    return False
def segInter(p1,q1,p2,q2):
    o1 = orientation(p1,q1,p2)
    o2 = orientation(p1,q1,q2)
    o3 = orientation(p2,q2,p1)
    o4 = orientation(p2,q2,q1)

    if o1 != o2 and o3 != o4:
        return True
    if o1 == 0 and on_segment(p1,p2,q1):
        return True
    if o2 == 0 and on_segment(p1,q2,q1):
        return True
    if o3 == 0 and on_segment(p2,p1,q2):
        return True
    if o4 == 0 and on_segment(p2,q1,q2):
        return True
    return False
for i in range(int(input())):
    sx1,sy1,ex1,ey1 = map(int,input().split())
    sx2,sy2,ex2,ey2 = map(int,input().split())

    if segInter((sx1,sy1),(ex1,ey1),(sx2,sy2),(ex2,ey2)):
        print("Yes")
    else:
        print("No")
