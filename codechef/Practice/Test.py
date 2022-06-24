def check(s,s1):
        i=0
        j=0
        c=0
        while(i<len(s) and j<len(s1)):
            if(s[i]==s1[j]):
                i+=1
                c+=1
            
            j+=1
        if(c!=len(s)):
            print("Impossible")
        else:
            print(len(s1)-len(s))

n=int(input())
for x in range(n):
    s=input()
    s1=input()
    if(len(s1)<len(s)):
        print("Impossible")
    else:
        
        check(s,s1)