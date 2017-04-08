def sum_of_squares(n):
    return sum([i**2 for i in range(1, n+1)])        # summing the square of a number in the given range from 1 

def square_of_sum(n):
    return sum(range(1, n+1)) ** 2                   # sum is in-built function used to sum int value

print (square_of_sum(100) - sum_of_squares(100))
