import string

tmp = string.digits+string.ascii_lowercase
def convert(num, base) ->str :
    q, r = divmod(num, base)
    if q == 0 :
        return tmp[r] 
    else :
        return convert(q, base) + tmp[r]

def isPrime(x) -> bool:
    if x <= 1:
        return False

    i = 2

    while(i**2 <= x):
        if x % i == 0:
            return False

        i += 1
    
    return True
    
def solution(n, k):
    
    n = convert(n, k)

    print(n)

    answer = 0

    for i in n.split('0'):
        if not i:
            continue

        if isPrime(int(i)):
            answer += 1

    return answer

print(solution(437674,3))
print(solution(110011,10))
print(solution(1111,4))