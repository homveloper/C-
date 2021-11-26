import sys
arr = list(map(int, sys.stdin.readlines()[-1].split()))
set_arr = sorted(set(arr))

dic = {value : i for i,value in enumerate(set_arr)}

for i in arr:
    print(dic[i], end=' ');