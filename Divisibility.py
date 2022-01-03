# Write your code here
n=int(input())
arr = list(map(int, input().split()))
z=''
for i in range(0, n):
    k = str(arr[i])
    z = z + k[-1]

if(int(z)%10==0):
    print("Yes")
else:
    print("No")
