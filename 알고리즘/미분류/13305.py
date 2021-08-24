N=int(input())
rangelist=list(map(int,input().split()))
pricelist=list(map(int,input().split()))

answer=0
min1=1000000000
for i in range(N-1):
  min1=min(min1,pricelist[i])
  answer+=min1*rangelist[i]
print(answer)