# Time Complexity of the Sieve of Eratosthenes

The **Sieve of Eratosthenes** is an efficient algorithm to find all prime numbers less than or equal to a given number \( n \).

---

## 📜 Algorithm Summary

1. Create a boolean array `is_prime[0..n]`, and initialize all entries as `true`.
2. Starting from \( p = 2 \), for each number \( p \leq \sqrt{n} \):
   - If `is_prime[p]` is `true`, mark all multiples of \( p \) (starting from \( p^2 \) to \( n \)) as `false`.

---

## 🧮 Time Complexity Derivation

### Step 1: Initialization

- Creating and initializing the array takes **O(n)** time.

### Step 2: Marking Multiples

- For each prime \( p \), we mark all its multiples as non-prime:
  \[
  p^2, p^2 + p, p^2 + 2p, \dots \leq n
  \]

Instead of analyzing exact iterations, we use an upper-bound technique:

- Each number \( \leq n \) may be marked multiple times (once for each prime factor).
- The total number of operations for marking can be approximated by:
  \[
  \sum_{p \leq n} \left( \frac{n}{p} \right)
  \]
- This simplifies to:
  \[
  n \cdot \sum_{p \leq n} \frac{1}{p} \approx n \log \log n
  \]

From number theory:
\[
\sum_{p \leq n} \frac{1}{p} = \ln \ln n + O(1)
\]

---

## ✅ Final Time Complexity

\[
\boxed{O(n \log \log n)}
\]

---

## 📋 Summary Table

| Step               | Time Complexity         |
|--------------------|--------------------------|
| Initialize array   | \( O(n) \)              |
| Mark non-primes    | \( O(n \log \log n) \)  |
| **Total**          | \( \boxed{O(n \log \log n)} \) |

---

Let me know if you'd like to include optimizations like **Segmented Sieve** or **Bitset Sieve**.
