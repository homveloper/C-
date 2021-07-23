import sys
from functools import cmp_to_key
arr=[list(map(int, i.split())) for i in sys.stdin.readlines()[1:]]
def compare(a,b):
    if a[0] == b[0]: return a[1] - b[1];
    return a[0] - b[0];
arr = sorted(arr,key=cmp_to_key(compare))

for i in arr:
    print(*i)

# for i in sorted([[*map(int,s.split())]for s in open(0)][1:]):print(*i)