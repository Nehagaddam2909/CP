no=int(input())
k=input()
s=set(k)
d={1:9,2:4,3:3,4:2,5:1,6:1,7:1,8:1,9:1}
if len(s)>1:
    print(0)
else:
    x=int(k[0])
    if no>(d[x]):
        print(0)
    else:
        if int(k)<=9:
            print(d[x])
        else:
            print(d[x]*(no*2))  