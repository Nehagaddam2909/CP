def func2(s,d):
    for i in range(len(s)-d):
        for j in range(i+1,len(s)):
            if i==j:
                continue
            s1=int(s[i]+s[j])
            #print(i,j)
            if(s1%8==0):
                print("YES")
                print(s1)
                return 1
    return 0  
def func3(s,d):
    for i in range(len(s)-2):
        for j in range(i+1,len(s)-1):
            if i==j:
                continue
            for k in range(j+1,len(s)):
                if j==k:
                    continue
                s1=int(s[i]+s[j]+s[k])
                if(int(s1)%8==0):
                    print("YES")
                    print(int(s1))
                    return 1
    return 0
def func1(s,d):
    for i in s:
        if i=='8' or i=='0':
            print("YES")
            print(i)
            return 1
    return 0
s=input()
if(int(s)%8==0):
    print("YES")
    print(int(s))
    exit()
else:
    flag=0
    i=len(s)
    flag=func1(s,1)
    #print(flag)
    if flag==0:
        flag=func2(s,2)
        if flag==0:
            flag=func3(s,3)
            
    if flag==0:
        print("NO")
    
