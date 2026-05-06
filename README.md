# Problem 1: Cyclic Substring Maximum Sum

## Problem Statement

You are given a string `S` consisting of lowercase English alphabets. Each character has a value equal to its position in the alphabet:

```text
a = 1, b = 2, ..., z = 26
```

You are allowed to perform the following operation:

* Choose any cyclic substring of the string (substring can wrap from the end to the beginning).

## Goal

* Find the maximum possible sum of character values from any cyclic substring such that no character appears more than once in the chosen substring.

---

# Input Format

* First line: A string `S`

---

# Output Format

* Print a single integer representing the maximum sum.

---

# Constraints

```text
1 ≤ |S| ≤ 10^5
```

---

# Example

## Input

```text
abca
```

## Output

```text
6
```

---

# Explanation

Possible cyclic substrings:

```text
abc -> 1 + 2 + 3 = 6
bca -> 2 + 3 + 1 = 6
cab -> 3 + 1 + 2 = 6
```

Maximum Sum:

```text
6
```

---

# Approach Used

## Step 1: Input Validation

* Read the input string.
* Check whether all characters are lowercase alphabets (`a-z`).
* If invalid characters exist, print:

```text
Invalid Input
```

---

## Step 2: Handle Cyclic Substrings

To process cyclic substrings easily, duplicate the string.

### Example

```text
Original String : abca
Duplicated String : abcaabca
```

This allows wrap-around substrings to be treated as normal substrings.

---

## Step 3: Use Sliding Window Technique

A sliding window is used to maintain a substring with:

* No duplicate characters
* Length not exceeding original string length

### Variables Used

```text
left    -> Starting index of window
right   -> Ending index of window
freq[26] -> Frequency array for characters
sum     -> Current substring sum
maxSum  -> Maximum sum found
```

---

## Step 4: Remove Duplicate Characters

While expanding the window:

* If a character already exists in the current window:

  * Remove characters from the left side
  * Update frequency and sum

This ensures all characters remain unique.

---

## Step 5: Calculate Character Sum

Each character value is calculated using:

```c
value = character - 'a' + 1;
```

### Example

```text
a = 1
b = 2
c = 3
```

---

## Step 6: Update Maximum Sum

After every valid window:

* Compare current sum with `maxSum`
* Store the maximum value

---

# Working Example

## Input

```text
abca
```

## Valid Cyclic Substrings

```text
abc -> 6
bca -> 6
cab -> 6
```

## Output

```text
6
```

---

# Time Complexity

```text
O(N)
```

### Reason

Each character is added and removed from the sliding window at most once.

---

# Space Complexity

```text
O(1)
```

Reason:

* Only a fixed-size frequency array of size 26 is used.

---

# Techniques Used

* Sliding Window
* Two Pointer Technique
* Frequency Array
* String Duplication for Cyclic Traversal

---

# Code Repository

```text
https://github.com/Shub202/DSA-Assingnment-1-Cyclic-Sub-String.git
```

---

# Sample Input and Output

## Valid Input

```text
PS E:\Advance Coding 1> gcc main.c -o main
PS E:\Advance Coding 1> ./main

Enter string: abca
Maximum Sum: 6
```

---

## Invalid Input

```text
PS E:\Advance Coding 1> ./main

Enter string: Shivam
Invalid Input
```

### Reason

The problem only allows lowercase English alphabets (`a-z`).

---

# Author

## Shubham Kumar

## LinkedIn

```text
https://www.linkedin.com/in/shubham-kumar-b21037295/
```
