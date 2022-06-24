n=int(input())
for x in range(n):
    l=int(input())
    s=input()
    xor=0
    s1=""
    for i in range(1,l+1):
        for j in range(l):
            s1=s[j:j+i]
           
            if(len(s1)!=i):
                break 
            else:
                #print(s1)
                xor=(xor^int(s1,2))%998244353 
    print(xor)        
            
            
