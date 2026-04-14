# 🧮 Category 1 — Digit Extraction Problems

Core trick used:

```
digit = n % 10
n = n / 10
```

### Problems

File:

```
CountDigits_LoopMethod.java
```

Problem: Count digits of a number.

---

File:

```
ReverseNumber_ModuloMethod.java
```

Problem: Reverse the digits of a number.

Example:

```
Input: 1234
Output: 4321
```

---

File:

```
SumOfDigits_ModuloMethod.java
```

Problem: Sum all digits of a number.

Example:

```
Input: 456
Output: 15
```

---

File:

```
ProductOfDigits_ModuloMethod.java
```

Problem: Multiply digits of a number.

Example:

```
Input: 234
Output: 24
```

---

File:

```
LargestDigit_TraversalMethod.java
```

Problem: Find largest digit in a number.

Example:

```
Input: 54829
Output: 9
```

---

File:

```
SmallestDigit_TraversalMethod.java
```

Problem: Find smallest digit.

---

File:

```
CountEvenOddDigits.java
```

Problem: Count how many digits are even and odd.

Example:

```
Input: 123456
Output:
Even = 3
Odd = 3
```

---

# 🧮 Category 2 — Number Transformation

These require **digit manipulation logic**.

---

File:

```
PalindromeNumber_ReverseMethod.java
```

Problem: Check if number reads same forward/backward.

Example:

```
121 → Palindrome
123 → Not Palindrome
```

---

File:

```
ArmstrongNumber_DigitPowerMethod.java
```

Problem: Check Armstrong number.

Example:

```
153
1³ + 5³ + 3³ = 153
```

---

File:

```
StrongNumber_FactorialMethod.java
```

Problem: Check strong number.

Example:

```
145
1! + 4! + 5! = 145
```

---

File:

```
DigitalRoot_IterativeMethod.java
```

Problem: Repeatedly sum digits until one digit remains.

Example:

```
9875 → 2
```

---

File:

```
DigitalRoot_Modulo9Method.java
```

Optimized trick:

```
1 + (n - 1) % 9
```

---

# 🧮 Category 3 — Mathematical Properties

These build strong logic.

---

File:

```
PrimeNumber_BruteForce.java
```

Problem: Check if number is prime.

---

File:

```
PrimeNumber_SqrtOptimization.java
```

Optimized prime check using √n.

---

File:

```
CountFactors_NumberTheory.java
```

Count divisors of a number.

Example:

```
12 → 6 factors
```

---

File:

```
PrintFactors_NumberTheory.java
```

Print all factors of a number.

---

File:

```
PerfectNumber_Check.java
```

Example:

```
28 → perfect number
```

Because:

```
1 + 2 + 4 + 7 + 14 = 28
```

---

# 🧮 Category 4 — Number Sequences

These problems strengthen loop logic.

---

File:

```
FibonacciSeries_LoopMethod.java
```

Print Fibonacci sequence.

---

File:

```
Factorial_IterativeMethod.java
```

Calculate factorial.

---

File:

```
PowerOfNumber_LoopMethod.java
```

Calculate:

```
a^b
```

---

File:

```
PowerOfNumber_FastExponentiation.java
```

Optimized method using **binary exponentiation**.

---

# 🧮 Category 5 — Bit Logic 

These combine math + bitwise thinking.

---

File:

```
CheckEven_BitwiseMethod.java
```

Use:

```
n & 1
```

---

File:

```
CheckPowerOfTwo_Bitwise.java
```

Use:

```
n & (n-1)
```

---

File:

```
CountSetBits_BitManipulation.java
```

Count number of `1` bits.

---

# ⭐ Master Problems

These problems combine multiple concepts.

---

File:

```
ReverseInteger_OverflowCheck.java
```

Classic LeetCode problem.

---

File:

```
PalindromeWithoutReverse.java
```

Check palindrome **without reversing number**.

---

File:

```
HappyNumber_DigitSquareLogic.java
```

Repeated digit square problem.

---

# 📂 All Questions

```
DSA-Practice
│
├── math_logic
│   ├── CountDigits_LoopMethod.java
│   ├── ReverseNumber_ModuloMethod.java
│   ├── SumOfDigits_ModuloMethod.java
│   ├── ProductOfDigits_ModuloMethod.java
│   ├── LargestDigit_TraversalMethod.java
│   ├── SmallestDigit_TraversalMethod.java
│   ├── CountEvenOddDigits.java
│   │
│   ├── PalindromeNumber_ReverseMethod.java
│   ├── ArmstrongNumber_DigitPowerMethod.java
│   ├── StrongNumber_FactorialMethod.java
│   ├── DigitalRoot_IterativeMethod.java
│   ├── DigitalRoot_Modulo9Method.java
│   │
│   ├── PrimeNumber_BruteForce.java
│   ├── PrimeNumber_SqrtOptimization.java
│   ├── CountFactors_NumberTheory.java
│   ├── PerfectNumber_Check.java
│   │
│   ├── FibonacciSeries_LoopMethod.java
│   ├── Factorial_IterativeMethod.java
│   ├── PowerOfNumber_LoopMethod.java
│   ├── PowerOfNumber_FastExponentiation.java
│   │
│   ├── CheckEven_BitwiseMethod.java
│   ├── CheckPowerOfTwo_Bitwise.java
│   ├── CountSetBits_BitManipulation.java
```

---
