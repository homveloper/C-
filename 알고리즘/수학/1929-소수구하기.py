from math import sqrt, ceil   

M, N = map(int, input().split())

nums = [True for i in range(N+1)]

for i in range(2, ceil(sqrt(N))+1):
    if nums[i]:
        for j in range(i*2, N+1, i):
            nums[j] = False

for i in range(M, N+1):
    if nums[i] : print(i)