import sys
input()
for i in sys.stdin.readlines():
    H, W, N = map(int, i.split())

    w = N // H if H == 1 else  N // H + 1
    h = H if H == 1 else N % H

    print(f'{h}{w:02}')