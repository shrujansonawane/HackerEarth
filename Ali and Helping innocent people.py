# Write your code here
l=list(input())

s1=(int(l[0])+int(l[1]))%2

s2=(int(l[4])+int(l[3]))%2

s3=(int(l[5])+int(l[4]))%2

s4=(int(l[8])+int(l[7]))%2

if(s1+s2+s3+s4==0 and l[2]not in"AEIOUY"):

    print("valid")

else:

    print("invalid")
