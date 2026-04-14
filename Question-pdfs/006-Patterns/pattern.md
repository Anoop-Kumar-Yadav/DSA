# 🧠 Pattern Thinking Model (Very Important)

Almost every pattern follows this rule:

```text
Outer Loop → Rows
Inner Loop → Columns
```

Example:

```
*
**
***
****
```

Execution idea:

```
Row 1 → print 1 star
Row 2 → print 2 stars
Row 3 → print 3 stars
Row 4 → print 4 stars
```

So:

```java
for(row=1; row<=n; row++){
    for(col=1; col<=row; col++){
        print("*");
    }
}
```

---

# 📁 Folder

```text
patterns
```

---

# ⭐ Category 1 — Basic Star Patterns

These build **nested loop understanding**.

---

### 1️⃣ Increasing Triangle

File:

```text
StarPattern_IncreasingTriangle.java
```

Output:

```
*
**
***
****
*****
```

---

### 2️⃣ Decreasing Triangle

File:

```text
StarPattern_DecreasingTriangle.java
```

Output:

```
*****
****
***
**
*
```

---

### 3️⃣ Right-Aligned Triangle

File:

```text
StarPattern_RightAlignedTriangle.java
```

Output:

```
    *
   **
  ***
 ****
*****
```

---

### 4️⃣ Pyramid Pattern

File:

```text
StarPattern_Pyramid.java
```

Output:

```
    *
   ***
  *****
 *******
*********
```

---

### 5️⃣ Inverted Pyramid

File:

```text
StarPattern_InvertedPyramid.java
```

Output:

```
*********
 *******
  *****
   ***
    *
```

---

# ⭐ Category 2 — Number Patterns

These build **index logic**.

---

### 6️⃣ Increasing Number Triangle

File:

```text
NumberPattern_IncreasingTriangle.java
```

Output:

```
1
12
123
1234
12345
```

---

### 7️⃣ Repeating Row Number

File:

```text
NumberPattern_RowNumber.java
```

Output:

```
1
22
333
4444
55555
```

---

### 8️⃣ Continuous Number Pattern

File:

```text
NumberPattern_ContinuousNumbers.java
```

Output:

```
1
23
456
78910
```

---

### 9️⃣ Reverse Number Triangle

File:

```text
NumberPattern_ReverseTriangle.java
```

Output:

```
12345
1234
123
12
1
```

---

# ⭐ Category 3 — Character Patterns

These improve **ASCII logic**.

---

### 🔟 Alphabet Triangle

File:

```text
CharacterPattern_AlphabetTriangle.java
```

Output:

```
A
AB
ABC
ABCD
ABCDE
```

---

### 1️⃣1️⃣ Same Alphabet Row

File:

```text
CharacterPattern_RowAlphabet.java
```

Output:

```
A
BB
CCC
DDDD
EEEEE
```

---

### 1️⃣2️⃣ Continuous Alphabet Pattern

File:

```text
CharacterPattern_ContinuousAlphabet.java
```

Output:

```
A
BC
DEF
GHIJ
```

---

# ⭐ Category 4 — Advanced Patterns

These combine **spaces + stars + numbers**.

---

### 1️⃣3️⃣ Diamond Pattern

File:

```text
StarPattern_Diamond.java
```

Output:

```
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
```

---

### 1️⃣4️⃣ Hollow Square

File:

```text
StarPattern_HollowSquare.java
```

Output:

```
*****
*   *
*   *
*   *
*****
```

---

### 1️⃣5️⃣ Hollow Pyramid

File:

```text
StarPattern_HollowPyramid.java
```

Output:

```
    *
   * *
  *   *
 *     *
*********
```

---

# ⭐ Category 5 — Hard Logic Patterns

These build **real algorithmic thinking**.

---

### 1️⃣6️⃣ Pascal Triangle

File:

```text
PascalTriangle_BinomialLogic.java
```

Output:

```
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
```

---

### 1️⃣7️⃣ Floyd’s Triangle

File:

```text
FloydTriangle_IncrementLogic.java
```

Output:

```
1
2 3
4 5 6
7 8 9 10
```

---

### 1️⃣8️⃣ Binary Pattern

File:

```text
BinaryPattern_AlternateLogic.java
```

Output:

```
1
01
101
0101
```

---

# 📂 All Question

```text
patterns
│
├── StarPattern_IncreasingTriangle.java
├── StarPattern_DecreasingTriangle.java
├── StarPattern_RightAlignedTriangle.java
├── StarPattern_Pyramid.java
├── StarPattern_InvertedPyramid.java
│
├── NumberPattern_IncreasingTriangle.java
├── NumberPattern_RowNumber.java
├── NumberPattern_ContinuousNumbers.java
├── NumberPattern_ReverseTriangle.java
│
├── CharacterPattern_AlphabetTriangle.java
├── CharacterPattern_RowAlphabet.java
├── CharacterPattern_ContinuousAlphabet.java
│
├── StarPattern_Diamond.java
├── StarPattern_HollowSquare.java
├── StarPattern_HollowPyramid.java
│
├── PascalTriangle_BinomialLogic.java
├── FloydTriangle_IncrementLogic.java
└── BinaryPattern_AlternateLogic.java
```

---

# 🧠 Pattern Master Tip (Very Important)

Every pattern problem can be solved using **three steps**.

1️⃣ Identify **rows**
2️⃣ Identify **columns inside each row**
3️⃣ Identify **what to print**

Example:

```
   *
  ***
 *****
```

Logic:

```
spaces = n - row
stars = 2*row - 1
```

This is how **expert programmers think about patterns**.

---

