# Write your code here
n = input()
if(len(n)<=20) and (n[0]=="z" and ("o"in n)):
    z=0
    o=0
    for i in range(len(n)):
        if n[i]=="z":
            z=z+1
        elif n[i]=="o":
            o=o+1
        else:
            break;
else:
    print("No")

if (z*2==o):
    print("Yes")
else:
    print("No")
