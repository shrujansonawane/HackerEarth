n,l,m = map(int,input().split())
A = [int(x) for x in input().split()]
count2 = 0
for i in range(n-m+1):
    B = A[i:i+m]
    count = 0
    for j in B:
        if j<=l:
            count+=1
            if count == len(B):
                count2+=1
print(count2)
