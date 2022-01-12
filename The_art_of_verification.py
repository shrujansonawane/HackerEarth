s=input()

un=s[s.find('username')+9:s.find('pwd')-1]

pwd=s[s.find('pwd')+4:s.find('profile')-1]

pr=s[s.find('profile')+8:s.find('role')-1]

r=s[s.find('role')+5:s.find('key')-1]

key=s[s.find('key')+4:]

print("username:",un)

print("pwd:",pwd)

print("profile:",pr)

print("role:",r)

print("key:",key)
