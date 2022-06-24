t=int(input())
for x in range(t):
    n=int(input())
    s=input()
    s1=""
    while(n>0):
        if(n%2==0):
            s1+=s[(n//2)-1]
            
            s=s[:(n//2)-1]+s[(n//2):]
        else:
            s1+=s[n//2]
            s=s[:(n//2)]+s[(n//2)+1:]
        print(s)    
        
    
        n-=1
    print(s1)
    