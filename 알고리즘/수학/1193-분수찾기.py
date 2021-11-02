def solution(n):

    i = 1
    x = 1
    y = 1

    


    # 내려 가는 방향
    flag = False

    while(i != n):

        if(flag == False):
            if( x == 1):
                x = 1
                y += 1
                flag = True
            else:
                x -= 1
                y += 1
        else:
            if ( y == 1):
                x += 1
                y = 1
                flag = False
            else:
                x += 1
                y -= 1

        i += 1

    return f'{x}/{y}'


n = int(input())
print(solution(n))