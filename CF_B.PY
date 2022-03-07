n=int(input())
for i in range(n):
    n,m,x1,y1,x2,y2=map(int,input().split())
    t1=1
    t2=1
    while(x1==x2 or y1==y2):
        if x1==n and y1==m:
            t1=-1
            t2=-1
        elif y1==m:
            t2=-1
        elif x1==n:
            
            
    