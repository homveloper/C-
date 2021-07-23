for i in sorted([[*map(int, i.split()[::-1])] for i in open(0)][1:]):
    print(*i[::-1])