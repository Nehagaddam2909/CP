def func(t,s):
    i=0
    d=dict()
    k=s.find('1')
    if(k!=-1):
        for i in range(t):
            if(s[i]=='0') and (i>k):
                #print(i)
                d[k+1]=(i)-(k)
                print(d[k+1],end=" ")
        print(len(d))
        for i in d.keys():
            print(i,d[i])
    else:
        print(0)
                
                
        
        
    
n=int(input())
for x in range(n):
    t=int(input())
    s=input()
    func(t,s)
