import math

def sieve_of_eratosthenes(limit):
    primes = [True] * (limit + 1)
    primes[0] = primes[1] = False
    for i in range(2, int(math.sqrt(limit)) + 1):
        if primes[i]:
            for j in range(i*i, limit + 1, i):
                primes[j] = False
    return [i for i in range(2, limit + 1) if primes[i]]

def nth_prime(initial_guess):
    guess = initial_guess
    while True:
        primes = sieve_of_eratosthenes(guess * int(math.log(guess)))
        if len(primes) >= initial_guess:
            return primes[initial_guess - 1]
        guess += 1

result = nth_prime(10001)
print(result)