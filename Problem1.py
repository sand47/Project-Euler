'''
Question :

If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
   Find the sum of all the multiples of 3 or 5 below 1000.

By Sandeep kumar ,31/3/17   
'''

target = 999

def SumDivisibeBy(n):

   p=target//n
   return (n*(p*(p+1)))//2


answer=SumDivisibeBy(3)+SumDivisibeBy(5)-SumDivisibeBy(15)
print(answer)
