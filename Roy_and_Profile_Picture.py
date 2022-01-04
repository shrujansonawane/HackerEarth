# Write your code here
l = int(input())
t = int(input())
while(t>0):
    n = list(map(int,input().split()))
    if(n[0]>=l and n[1]>=l):
        if(n[0]!=n[1]):
            print("CROP IT")
        else:
            print("ACCEPTED")
    else:
        print("UPLOAD ANOTHER")
    t=t-1
