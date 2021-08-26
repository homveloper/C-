import sys
score = [i if i >= 40 else 40 for i in map(int, sys.stdin.readlines())]
print(sum(score) // len(score))