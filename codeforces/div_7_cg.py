n=int(input())
for i in range(n):
    s=list(input())
    m=0
    c=(s.count('0'))
    c1=(s.count('1'))
    for j in range(0,len(s)):
        if(c==0 or c1==0 or c==c1):
            m=max(m,0)
        elif(c>c1):
            m=max(m,c1)
        else:
            m=max(m,c)
        if(s[j]=='0'):
            c-=1
        elif(s[j]=='1'):
            c1-=1
    print(m)