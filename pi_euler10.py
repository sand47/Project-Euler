def isPrime(n):
    if n == 2: return True
    if n % 2 == 0 or n < 2: return False
    for i in range(3, int(n**0.5)+1, 2):
        if n % i == 0: return False
    return True

if __name__ == "__main__":
    n = i = 1
    x=0
    while n<2000000:
        n += 2
        i+= 1
        if isPrime(n):
            x=x+n
    print (x+2)
