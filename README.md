# DSA and CP Series

## In this repo you can find useful practise problems.

### Problem 1
Find out how to find if a number is power of 2 or not witout any loop.
> **Hints:**
* You must use Bitwise Operator to solve this problem.

  [![Solution](https://img.shields.io/badge/Solution-View_Code-blue?style=for-the-badge&logo=github)](https://github.com/phoenix-kcn/DSA-and-CP-Series/blob/main/Bitwise%20Operator/problem_one.cpp)

---

### Problem 2: The Integer Reversal Challenge

**Objective:**
Design an algorithm that accepts an integer and returns it with its digits reversed.

**Examples:**
* Input: `456` → Output: `654`
* Input: `753951` → Output: `159357`

### Strategy & Hints
* **Keep it fundamental:** You do not need to convert the number into a string or use fancy libraries.

### The Mathematical Logic

At first glance, reversing a number like **25** to get **52** feels intuitive. However, to teach a computer to do this, we must deconstruct the **Base-10** place value system.

Think of the number **25**:
`25 = (2 * 10) + (5 * 1)`

To reverse it to **52**, we are essentially swapping the importance (weight) of the digits:
`52 = (5 * 10) + (2 * 1)`

   [![Solution](https://img.shields.io/badge/Solution-View_Code-blue?style=for-the-badge&logo=github)](https://github.com/phoenix-kcn/DSA-and-CP-Series/blob/main/Bitwise%20Operator/problem_two.cpp)

---
### Problem 3: Reverse an array of integers

**Objective:**
Write a programme that reverses an array of n number of integers.

**Examples:**
* Input: `[1, 2, 3, 5]` → Output: `[5, 3, 2, 1]`
* Input: `[76, 0, -5, 164, 16, 8]` → Output: `[8, 16, 164, -5, 0, 76]`

    [![Solution](https://img.shields.io/badge/Solution-View_Code-blue?style=for-the-badge&logo=github)](https://github.com/phoenix-kcn/DSA-and-CP-Series/blob/main/Apna%20College%20HomeWorks/problem_three.cpp)

---

### Problem 4: Way Too Long Words

**Objective:**
Automatically abbreviate words that are strictly longer than 10 characters by replacing the middle characters with their count.

**Examples:**
* Input: `localization` → Output: `l10n`
* Input: `internationalization` → Output: `i18n`
* Input: `apple` → Output: `apple` (No change, length $\le 10$)

### Hints
* Check the Length: Use `.length()` to see if the string needs to be changed.
* The "Middle" Math: The number of characters to skip is always $TotalLength - 2$.
* String Concatenation: Combine the first character `s[0]`, the calculated number, and the last character `s[length - 1]`.

   [![Solution](https://img.shields.io/badge/Solution-View_Code-blue?style=for-the-badge&logo=github)](https://github.com/phoenix-kcn/DSA-and-CP-Series/blob/main/CodeForces/problem_four.cpp)
---

### Problem 5: Team

**Objective:**
Calculate how many problems three friends will solve together. They only implement a solution if at least two of them are sure about it (input is `1`) otherwise they do not (input is `0`).

**Examples:**
* Input: `1 1 0` → Output: Count it (Sum is 2, which is $> 1$)
* Input: `1 1 1` → Output: Count it (Sum is 3, which is $> 1$)
* Input: `1 0 0` → Output: Skip (Sum is 1, which is $\ngtr 1$)

### Hints
* **Row-by-Row:** Process each of the $n$ lines individually.
* **The Math:** If the sum of the three integers on a line is greater than 1 (`sum > 1`), increment your counter.
* **Input Handling:** You can store the inputs in a 2D array or sum them on the fly to save memory.

    [![Solution](https://img.shields.io/badge/Solution-View_Code-blue?style=for-the-badge&logo=github)](https://github.com/phoenix-kcn/DSA-and-CP-Series/blob/main/CodeForces/problem_five.cpp)
---
### Problem 6: Bit++

**Objective:**
You are given a programming language called "Bit++". It contains exactly one variable, $x$, which starts with a value of $0$. You are provided with a program consisting of $n$ statements. Each statement is a string containing an operation.
* `++` : Increases the value of variable $x$ by 1.
* `--` : Decreases the value of variable $x$ by 1.

The operations can be written as prefix (`++X`, `--X`) or postfix (`X++`, `X--`). Execute the program and calculate the final value of $x$.

**Examples:**
* Input: `1 ++X` → Output: `1`
* Input: `1 --X` → Output: `-1`
* Input: `2 X++ --X` → Output: `0`

### Hints
* **Initial Value:** The variable $x$ always starts at 0.
* **Simplification:** Both `++X` and `X++` perform the same mathematical operation ($x = x + 1$). The same applies to the decrement operations.
* **String Parsing:** Since the operation format is fixed (3 characters), you only need to check the middle character. If the character at index 1 is `+`, increment $x$. If it is `-`, decrement $x$.

[![Solution](https://img.shields.io/badge/Solution-View_Code-blue?style=for-the-badge&logo=github)](https://github.com/phoenix-kcn/DSA-and-CP-Series/blob/main/CodeForces/problem_six.cpp)

