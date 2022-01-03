answer =1
n = int(input())
arr = list(map(int, input().split()))
for i in range(0,n):
    answer = (answer*arr[i])%(10**9+7)

print(answer)
