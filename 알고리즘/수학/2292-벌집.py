N = int(input())
s, e, r = 1,1,1

while True:
    if s <= N <= e:
        print(r)
        break

    s = e + 1
    e += r * 6

    r += 1