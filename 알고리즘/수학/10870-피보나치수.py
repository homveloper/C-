dp = [-1 for i in range(10000)]

def fib(n):
    if(n<=1):
        return n

    return fib(n-1) + fib(n-2)

print(fib(int(input())))