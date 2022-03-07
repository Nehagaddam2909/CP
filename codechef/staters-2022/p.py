n=int(input())
for x in range(n):
    a=int(input())
    s=input()
    set_c=set()
    for i in range(a):
        if(i!=0 and i!=a-1):
            s1=s[:i]+s[i+1:]
            
            set_c.add(s1)
            
        elif i==0:
            s1=s[i+1:]
            
            set_c.add(s1)
        elif i==a-1:
            s1=s[:i]
            
            set_c.add(s1)
    print(len(set_c))
            