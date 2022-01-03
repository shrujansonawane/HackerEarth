# Write your code here
n = int(input())
arr = list(map(int, input().split()))

emt1=''
emt2=''
t=(n/2)
for i in range(0,n):
    if (i<t):
        k=str(arr[i])
        emt1 = emt1 + k[0]
        pass
    elif (i>=t):
        k=str(arr[i])
        emt2 = emt2 + k[-1]
        pass
    else:
        break;
z=int(emt1+emt2)
if ((z%11)==0):
    print("OUI")
else:
    print("NON")
