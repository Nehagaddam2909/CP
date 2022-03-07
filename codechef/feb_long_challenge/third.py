n=int(input())
for i in range(n):
    k,m=map(int,input().split())
    s=list(input())
    c1=s.count('0')
    c2=s.count('1')
    if(k%2==0):
        if(c1%2==0 and c2%2==0):
            print("Yes")
        else:
            flag=0
            temp_c=c1 
            temp_c1=c2
            temp_m=m
            while(temp_m>0):
                temp_c=+1
                temp_c1=-1
                if(temp_c%2==0 and temp_c1%2==0):
                    flag=1
                    print("Yes")
                    break 
                temp_m-=1
            temp_c=c2 
            temp_c1=c1
            while(m>0 and flag!=1):
                temp_c=+1
                temp_c1=-1
                if(temp_c%2==0 and temp_c1%2==0):
                    flag=1
                    print("Yes")
                    break 
                temp_m-=1
            if(flag==0):
                print("No")
                
    else:
        if((c1%2==0 and c2%2!=0) or (c1%2!=0 and c2%2==0)):
            print("Yes")
        else:
            flag=0
            temp_c=c1 
            temp_c1=c2
            temp_m=m
            while(temp_m>0):
                temp_c=+1
                temp_c1=-1
                if((temp_c%2==0 and temp_c1%2!=0) or (temp_c%2!=0 and temp_c1==0)):
                    flag=1
                    print("Yes")
                    break 
                temp_m-=1
            temp_c=c2 
            temp_c1=c1
            while(m>0 and flag!=1):
                temp_c=+1
                temp_c1=-1
                if((temp_c%2==0 and temp_c1%2!=0) or (temp_c%2!=0 and temp_c1==0)):
                    flag=1
                    print("Yes")
                    break 
                temp_m-=1
            if(flag==0):
                print("No")