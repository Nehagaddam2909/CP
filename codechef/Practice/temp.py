a=int(input())
m=int(input())
from itertools import permutations
perm=permutations("123456789",a)
count=0
for i in perm:
    number=""
    for x in i:
        number+=str(x)+str(x)
    if(int(number)%m==0):
        count+=1
print(count)
    