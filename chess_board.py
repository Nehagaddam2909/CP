n=int(input())
while n>0:
    c,k=map(int,input().split())
    if (c-k)<(k-1):
        print(-1)
    else:
        i=0
        count=1
        for m in range(c):
            for j in range(c):
                if i==j and count<=k and m%2==0:
                    print('R',end="")
                else:
                    print('.',end="")
            if m%2==0:
                count=count+1
            i=i+1
            #print(i)
            print()
            
    n=n-1