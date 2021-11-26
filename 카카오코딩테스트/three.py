

from pprint import pprint

import math

CHECK = "check"
STATUS = "status"
TOTAL_TIME = "total_time"

IN = "IN"
OUT = "OUT"

def solution(fees, records):
    
    base_time = fees[0]
    base_fee = fees[1]
    unit_time = fees[2]
    unit_fee = fees[3]
    
#     {
#         5961 : {
#             check = [], status = IN, total_time = 0
#         }
#         ...
#     }

    car_record = {}
    
    for record in records:
        time, car_number, status = record.split(' ')
        
        # xx:xx to seconds
        
        if car_number not in car_record:
            car_record[car_number] = {}
            car_record[car_number][CHECK] = []
            car_record[car_number][STATUS] = ''
            car_record[car_number][TOTAL_TIME] = 0

        if status == OUT:
            total_minute = get_total_minute(time)
            last_time = car_record[car_number][CHECK][-1]
            car_record[car_number][TOTAL_TIME] += total_minute - get_total_minute(last_time)

        car_record[car_number][CHECK].append(time)
        car_record[car_number][STATUS] = status

    # 출차 체크 및 계산
    answer = []
    for car_number in sorted(car_record):
        if car_record[car_number][STATUS] == IN:
            last_time = car_record[car_number][CHECK][-1]
            car_record[car_number][TOTAL_TIME] += get_total_minute('23:59') - get_total_minute(last_time)

        fee = base_fee
        
        if car_record[car_number][TOTAL_TIME] > base_time:
            fee += math.ceil((car_record[car_number][TOTAL_TIME] - base_time) / unit_time) * unit_fee

        answer.append(fee)

    return answer

def get_total_minute(time) -> int:
    hour, minute = time.split(':')
    return int(hour) * 60 + int(minute)

print(solution([180, 5000, 10, 600], ["05:34 5961 IN", "06:00 0000 IN", "06:34 0000 OUT", "07:59 5961 OUT", "07:59 0148 IN", "18:59 0000 IN", "19:09 0148 OUT", "22:59 5961 IN", "23:00 5961 OUT"]))