count=0
p,s,t,h,x = list(map(int, input().split()))
z=s-t
if((s-t)<=x):
    count=count+(p*z)
    count=count+(h*(x-z))    
    print(count)
elif((s-t)>x):
    count=count+(p*x)
    print(count)
