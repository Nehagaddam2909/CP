n=int(input())
for i in range(n):
    a,b,c=map(int,input().split())
    if a==b and b==c and a==c:
        if a%2==0:
            print("YES")
        else:
            print("NO")
    elif a==b or b==c or a==c:
        if a==b:
            if c%2==0: print("YES")
            else: print("NO")
        if b==c:
            if a%2==0: print("YES")
            else: print("NO")
        if a==c:
            if b%2==0: print("YES")
            else: print("NO")
    else:
        l=[a,b,c]
        m=max(l)-min(l)
        l.remove(max(l))
        if m==max(l):
            print("YES")
        else:
            print("NO")