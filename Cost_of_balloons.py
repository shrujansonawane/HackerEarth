# Write your code here
t = int(input())
for i in range(t):
    p,g = map(int, input().split())
    n = int(input())

    cost = 0
    low = min(p,g)
    maax = max(p,g)
    p1_tot = 0
    p2_tot = 0
    for i in range(n):
        p1,p2 = map(int, input().split())
        p1_tot += p1
        p2_tot += p2

    if p1_tot >= p2_tot:
        cost += p1_tot*low
        cost += p2_tot*maax
    else:
        cost += p2_tot*low
        cost += p1_tot*maax
    print(cost)
