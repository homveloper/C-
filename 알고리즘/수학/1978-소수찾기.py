def isPrime(x) -> bool:
    if x <= 1:
        return False

    i = 2

    while(i**2 <= x):
        if x % i == 0:
            return False

        i += 1
    
    return True

input()
print(sum(map(isPrime, map(int, input().split()))))