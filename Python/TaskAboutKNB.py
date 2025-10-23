"""
r1 = int(input())
s1 = int(input())
p1 = int(input())
r2 = int(input())
s2 = int(input())
p2 = int(input())
"""
r1, s1, p1 = map(int, input().split())
r2, s2, p2 = map(int, input().split())
countp = min(r1, s2) + min(s1, p2) + min(p1, r2)
print(countp)