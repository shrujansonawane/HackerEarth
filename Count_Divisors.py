# Write your code here
n = list(map(int,input().split()))

count = 0
for i in range (n[0],n[1]+1):
    if (i%n[2] == 0):
        count=count+1
        i=i+1

print(count)
