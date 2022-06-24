t=int(input())
for z in range(t):
   n=int(input())
   s=input()

   l=s.split('W')
   flag=0
   c=0
   for i in l:
      #print(i)
      if('B' not in i and 'R' not in i):
         c+=1
      elif ('B' not in i or 'R' not in i):
         flag=1
         break
   if(c==len(l)):
      print("YES")
   elif flag==1:
      print("NO")
   else:
      print("YES")