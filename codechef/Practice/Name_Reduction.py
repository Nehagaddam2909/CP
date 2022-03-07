n=int(input())
for m in range(n):
    s1=list(input())
    k=int(input())
    s=""
    for x in range(k):
        s+=input()
    s=list(s)
    flag=0
    c=0
    for i in range(len(s)):
        if(s[i] not in s1):
            print("NO")
            flag=1 
            break
        else:
            s1.remove(s[i])
    if(flag==0):
        print("YES")   
    
