def solution(id_list, report, k):

    id_to_delcair_list = {}
    declair_count_list = {}

    for i in id_list:
        id_to_delcair_list[i] = []
        declair_count_list[i] = 0

    for i in report:
        user, target = i.split(" ")

        if target not in id_to_delcair_list[user]:
            id_to_delcair_list[user].append(target)
            declair_count_list[target] += 1

    declair_user_list = [key for key in declair_count_list.keys() if declair_count_list[key] >= k]
    
    answer = []

    for key in id_to_delcair_list.keys():

        count = 0

        for target in declair_user_list:
            if target in id_to_delcair_list[key]:
                count += 1

        answer.append(count)

    return answer

print(solution(["con", "ryan"], ["ryan con", "ryan con", "ryan con", "ryan con"], 3))

# print(solution(["muzi", "frodo", "apeach", "neo"],["muzi frodo","apeach frodo","frodo neo","muzi neo","apeach muzi"],2))