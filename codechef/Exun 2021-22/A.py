 
import math
def primefactors(n):
   #even number divisible
   while n % 2 == 0:
      print (2),
      n = n / 2
   #print(n)
   #print(int(math.sqrt(n)+1))
   #n became odd
   for i in range(3,int(math.sqrt(n))+1,2):
     
      while (n % i == 0):
         print (i)
         n = n / i
    
   if n > 2:
       #pass
      print (n)
n=int(input())
for i in range(n):
    n1,m1=map(int,input().split())
    
