d={}
def func(ini1,ini2):
    ini1=tuple(ini1)
    ini2=tuple(ini2)
    if tuple(ini1)< tuple(ini2):
        d[ini1]=min(ini1)
    else:
        m=max(ini2)+1
        d[ini1]=m
    #return m
t=int(input())
for i in range(t):
    n=int(input())
    l=[]
    for j in range(n):
        l.append(list(map(int,input().split())))
    s=(1,n)
    if l[0]!=s:
        func(s,l[0])
    for i in range(0,len(l)-1):
        func(l[i],l[i+1])
    d[tuple(l[-1])]=min(l[-1])
    print(d)
        
        
        
        
    