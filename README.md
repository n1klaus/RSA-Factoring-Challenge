# RSA Factoring Challenge
`
The RSA problem is defined as the task of recovering a value `m` such that `c ≡ me (mod n)`, where `(n, e)` is an RSA public key, and `c` is an RSA ciphertext. Currently the most promising approach to solving the RSA problem is to factor the modulus `n`. With the ability to recover prime factors, an attacker can compute the secret exponent `d` from a public key `(n, e)`, then decrypt `c` using the standard procedure. To accomplish this, an attacker factors `n` into `p` and `q`, and computes `lcm(p − 1, q − 1)` that allows the determination of `d` from `e`.
`

## The RSA cryptosystem Notes
### Prime factorizarion
- primality test : an algorithm for determining whether an integer is a prime or not,
  returning `True` or `False` for the provided number

### Key generation
- Computing a semiprime `n` from two distinct prime numbers `p` and `q`
  `n` is used as a modulus for the both the private and public key
  `n = pq`
- Compute the Carmichael's totient function `λ(n)` : (for `pow(a, m) ≡ 1`, 
  it is the smallest positive integer `m` that 
  for every integer `a` between 1 and `n` that is comprime to `n`) i.e
  `λ(n) = lcm(p − 1, q − 1)`
- Compute the lcm with Euclidean algorithm
  `lcm(a, b) = |ab|/gcd(a, b)`
- Finding a coprime / mutually prime number `e`: (another integer number in that
  the only positive divisor for both is 1
  `1 < e < λ(n)` AND `gcd(e, λ(n)) = 1`
- Determining `d`, which is the modular multiplicative inverse of `e` : 
  (an integer whose product `ed` is congruent to 1 with respect to modulus `m` 
  i.e the remainder after dividing `ed` by the integer `m` is 1)

- The public key consists of the modulus n and the public (or encryption) exponent e. 
  The private key consists of the  private (or decryption) exponent d, 
  which must be kept secret. p, q, and λ(n) must also be kept secret 
  because they can be used to calculate d.

### Key distribution
- only the public key `(n, e)` is transmitted, the private key `d` is never transmitted

### Encrytpion
  - first turn the message (unpadded plaintext) into an integer `m`
    ciphertext (padded plaintext) using any padding scheme such that
    `0 ≤ m < n`
  - compute the ciphertext `c` using the public key `e` i.e
    `c ≡ pow(m, e) (mod n)`

### Decryption
  - Recover `m` from `c` using private key exponent `d` i.e
    `m ≡ pow(c, d) ≡ pow(pow(m, e),d) (mod n)`
  - or using the Chinese remainder algorithm
    `m ≡ cd (mod n)`

## Example


# Objective
- Integer factoriztion : Factorize a number into a product of two smaller numbers
- Prime factoriztion : Factorize a number into a product of two smaller prime numbers

# Compilation
    gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c -o factors

# Usage
    ./factors test00

© ALX SOFTWARE ENGINEERING 2022