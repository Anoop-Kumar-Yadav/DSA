Excellent 🔥 — now you’re moving into **standard named patterns**, which are very important for:

* exams
* interviews
* building strong loop intuition

I’ll give you a **curated list of famous pattern problems**, grouped properly with **file names + expected output**, but **NO solutions yet** (you should attempt first).

---

# 📁 Folder

```
patterns_named
```

---

# ⭐ Category 1 — Basic Famous Patterns

---

### 1️⃣ Solid Rectangle

File:

```
SolidRectangle_Pattern.java
```

Output:

```
*****
*****
*****
*****
```

---

### 2️⃣ Hollow Rectangle

File:

```
HollowRectangle_Pattern.java
```

Output:

```
*****
*   *
*   *
*****
```

---

### 3️⃣ Half Pyramid (Star)

File:

```
HalfPyramid_StarPattern.java
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

### 4️⃣ Inverted Half Pyramid

File:

```
InvertedHalfPyramid_StarPattern.java
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

# ⭐ Category 2 — Alignment-Based Patterns

---

### 5️⃣ Rotated Half Pyramid (Right Aligned)

File:

```
RotatedHalfPyramid_StarPattern.java
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

### 6️⃣ Solid Rhombus

File:

```
SolidRhombus_Pattern.java
```

Output:

```
    *****
   *****
  *****
 *****
*****
```

---

### 7️⃣ Hollow Rhombus

File:

```
HollowRhombus_Pattern.java
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

# ⭐ Category 3 — Pyramid Patterns

---

### 8️⃣ Pyramid Pattern

File:

```
Pyramid_StarPattern.java
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

### 9️⃣ Inverted Pyramid

File:

```
InvertedPyramid_StarPattern.java
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

### 🔟 Hollow Pyramid

File:

```
HollowPyramid_StarPattern.java
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

### 1️⃣1️⃣ Diamond Pattern

File:

```
Diamond_StarPattern.java
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

# ⭐ Category 4 — Number Patterns (Very Important)

---

### 1️⃣2️⃣ Floyd’s Triangle

File:

```
FloydTriangle_Pattern.java
```

Output:

```
1
2 3
4 5 6
7 8 9 10
```

---

### 1️⃣3️⃣ 0-1 Triangle

File:

```
BinaryTriangle_01Pattern.java
```

Output:

```
1
01
101
0101
```

---

### 1️⃣4️⃣ Number Pyramid

File:

```
NumberPyramid_Pattern.java
```

Output:

```
    1
   121
  12321
 1234321
```

---

### 1️⃣5️⃣ Palindromic Number Pattern

File:

```
PalindromicNumberPattern.java
```

Output:

```
    1
   212
  32123
 4321234
```

---

# ⭐ Category 5 — Advanced / Logic Heavy Patterns

---

### 1️⃣6️⃣ Butterfly Pattern

File:

```
ButterflyPattern_Star.java
```

Output:

```
*      *
**    **
***  ***
********
********
***  ***
**    **
*      *
```

---

### 1️⃣7️⃣ Pascal’s Triangle

File:

```
PascalTriangle_BinomialPattern.java
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

### 1️⃣8️⃣ Zig-Zag Pattern

File:

```
ZigZagPattern.java
```

Output:

```
*   *   *
  *   *
*   *   *
```

---

# 🧠 How to Approach ANY Pattern (Golden Formula)

Every pattern can be solved using:

```
1. Rows → outer loop
2. Columns → inner loop
3. Decide:
   - spaces
   - stars/numbers
```

---

# ⭐ Recommended Solving Order

Very important sequence:

```
1 → 2 → 3 → 4
→ 5 → 6 → 7
→ 8 → 9 → 10 → 11
→ 12 → 13 → 14 → 15
→ 16 → 17 → 18
```

This builds:

```
basic → alignment → symmetry → advanced logic
```

---

# 🔥 Pro Tip (Very Important)

Most patterns depend on these formulas:

```
spaces = n - row
stars = row
stars = 2*row - 1
numbers = increasing / decreasing
```

Master these → **you can solve any pattern**.

---

✅ Next step (after you solve these):

We move to:

```
Arrays (start of real DSA)
```

---

# 🦋 Butterfly Pattern

## 📁 File Name

```java
ButterflyPattern_Star.java
```

---

# 1️⃣ Output

For `n = 4`

```
*      *
**    **
***  ***
********
********
***  ***
**    **
*      *
```

---

# Practice Variations (Important)

Try modifying this:

---

### 1️⃣ Hollow Butterfly

```
*      *
**    **
* *  * *
*  **  *
*  **  *
* *  * *
**    **
*      *
```

---

### 2️⃣ Number Butterfly

```
1      1
12    21
123  321
12344321
```

---

### 3️⃣ Binary Butterfly

```
1      1
10    01
101  101
```

---

