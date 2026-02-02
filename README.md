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
