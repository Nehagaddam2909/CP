def check(l,n):
    for i in l:
        if i>=n:
            return i
    return -1
n=int(input())
while n>0:
    s1=""
    t=[]
    s=[]
    ss=[]
    t_n,s_n=map(int,input().split())
    t=list(map(int,input().split()))
    
    for i in range(s_n):
        s_n1=int(input())
        s=list(map(int,input().split()))
        ss.append(s)
    s1=[]
    for i in ss:
        sum1=sum(i)/len(i)
        z=check(t,sum1)
        if z!=-1:
            s="1"*len(i)
        else:
            s="0"*len(i)
        s=list(s)
        if len(i)==2:
            s1=s1+list("00")
            s=""
            continue
        for j in range(len(i)):
            sum1=(sum(i)-i[j])/(len(i)-1)
            if z==-1:
                z=check(t,sum1)
                if z!=-1:
                    s[j]='1'
                    continue
            #print(sum1)
            if sum1>z:
                s[j]="0"
        s1=s1+s
        s=""
    sm=""
    print(sm.join(s1))
            
                
        

        
        
        
    
    
        
    n=n-1