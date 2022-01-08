n,k=map(int,input().split())
a=list(map(int,input().split()))
d={}
for i in range(n):
 d[i+1]=a[i]
sort_d=sorted(d.items(),key=lambda x:x[1],reverse=True)
for j in sort_d[:k]:
 print(j[0],end=" ")
