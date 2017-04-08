'''
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?

By Sandeep ,1/4/17
'''

def isPrime(n):                                    #checking for prime number 
    if n == 2: return True
    if n % 2 == 0 or n < 2: return False
    for i in range(3, int(n**0.5)+1, 2):
        if n % i == 0: return False
    return True

if __name__ == "__main__":                               
    n = count = 1
    while count < 10001:                          # when count is 10001 stop and print the value of prime
        n += 2                                    # Adding 2 since ,we dont want even numbers 
        if isPrime(n): count += 1                 # if prime add count +1 
    print (n)
