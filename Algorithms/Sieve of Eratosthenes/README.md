# Time Complexity of the Sieve of Eratosthenes

The **Sieve of Eratosthenes** is an efficient algorithm to find all prime numbers less than or equal to a given number \( n \).

---

## Algorithm Summary

1. Create a boolean array `is_prime[0..n]`, and initialize all entries as `true`.
2. Starting from \( p = 2 \), for each number \( p \leq \sqrt{n} \):
   - If `is_prime[p]` is `true`, mark all multiples of \( p \) (starting from \( p^2 \) to \( n \)) as `false`.

---

## Time Complexity Derivation

### Step 1: Initialization

- Creating and initializing the array takes **O(n)** time.

### Step 2: Marking Multiples

- For each prime p, we mark all its multiples as non-prime:

  p^2, p^2 + p, p^2 + 2p, ...

Instead of analyzing exact iterations, we use an upper-bound technique:

- Each number `n` may be marked multiple times (once for each prime factor).
- The total number of operations for marking can be approximated by:
  ![image](https://github.com/user-attachments/assets/e09b60ca-7565-4e2f-86da-6a2f28912228)
- This simplifies to:
  ![image](https://github.com/user-attachments/assets/7bb8a0da-17cb-448c-81ae-84214ef9c663)

From number theory:
  ![image](https://github.com/user-attachments/assets/739ddc4c-71b8-441e-8cbe-8dca0ce0de98)

---

## Final Time Complexity

![image](https://github.com/user-attachments/assets/f543f84d-08f7-4481-a3b6-bed4f64d3a7b)


---

## Summary Table

| Step               | Time Complexity         |
|--------------------|--------------------------|
| Initialize array   | O(n)                     |
| Mark non-primes    | O(nloglog n)             |
| **Total**          | O(nloglog n)  + O(n)     |

---

Follow ups are **Segmented Sieve** or **Bitset Sieve**.
