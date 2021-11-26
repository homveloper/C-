import numpy as np

DAMAGED = 1
REPAIR = 2

def solution(board, skill):
    board = np.array(board)
    skill = np.array(skill)

    skill[skill[:,0] == DAMAGED, -1] *= -1

    # unique_skill, index,count = np.unique(skill[:, :-1], axis=0, return_counts=True, return_index=True)
    # skill[index, -1] *= count
    # unique_skill = np.concatenate([unique_skill, np.vstack(skill[index,-1])], axis=1)

    for s in skill:
        r1 = s[1]
        c1= s[2] 
        r2=s[3]
        c2=s[4]
        degree=s[5]

        board[r1:r2+1,c1:c2+1] += degree

    return int(np.sum(board >= 1))


# solution([[1,2,3],[4,5,6],[7,8,9]], [[1,1,1,2,2,4],[1,0,0,1,1,2],[2,2,0,2,0,100]]	)

print(solution([[5, 5, 5, 5, 5], [5, 5, 5, 5, 5], [5, 5, 5, 5, 5], [5, 5, 5, 5, 5]], [[1, 0, 0, 3, 4, 4], [1, 2, 0, 2, 3, 2], [2, 1, 0, 3, 1, 2], [1, 0, 1, 3, 3, 1]]))
