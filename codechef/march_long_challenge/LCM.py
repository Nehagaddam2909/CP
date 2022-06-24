from ctypes.wintypes import PINT


def check(s):
    if len(set(s))==1:
        print(s)
        print(s)
    else:
        m=len(s)
        n=m//2
        if(s[n]=='1'):
            c='0'
        else:
            c='1'
        k=s.find(c,n+1,m)
        if(k!=-1):
            s1=s[:n]+s[k]+s[n+1:k]+s[n]+s[k+1:]
        else:
            k=s.find(c,0,n)
            s1=s[:k]+s[n]+s[k+1:n]+s[k]+s[n+1:]
        print(s)
        print(s1)
        
        


t=int(input())
for x in range(t):
    n=int(input())
    s=input()
    check(s)
    
    