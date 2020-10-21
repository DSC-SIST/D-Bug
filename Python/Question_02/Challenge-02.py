# Returns the factorial value as the output
def factorial(n):
    factorial = 1
    for i in range(n):
        factorial*=i
    return(factorial)

factorial()
