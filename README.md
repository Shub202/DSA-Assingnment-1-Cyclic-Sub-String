# Problem 1: Cyclic Substring Maximum Sum 

You are given a string S consisting of lowercase English alphabets. Each character has a 
value equal to its position in the alphabet (i.e., a = 1, b = 2, ..., z = 26). 
You are allowed to perform the following operation: 
• Choose any cyclic substring of the string (i.e., substring can wrap from end to 
beginning).  
Your task is to: 
• Find the maximum possible sum of character values from any cyclic substring such 
that no character appears more than once in the chosen substring.  
Input Format: 
• First line: A string S  
Output Format: 
• Print a single integer representing the maximum sum.  
Constraints: 
• 1≤∣S∣≤105 
Example: 
Input: 
abca 
Output: 
6 
Explanation: 
Possible cyclic substrings: 
• "abc" → sum = 1 + 2 + 3 = 6  
• "bca" → sum = 2 + 3 + 1 = 6  
• "cab" → sum = 3 + 1 + 2 = 6  
Maximum = 6


# Approach Used: 

# Step 1: Input Validation

Read the input string.
Check whether all characters are lowercase alphabets (a-z).
If invalid characters exist, print:
Invalid Input

# Step 2: Handle Cyclic Substrings
To process cyclic substrings easily, duplicate the string.
Example:
Original String: abca
Duplicated String: abcaabca
This allows wrap-around substrings to be treated as normal substrings.

# Step 3: Use Sliding Window Technique

A sliding window is used to maintain a substring with:
No duplicate characters
Length not exceeding original string length

Variables used:
left → starting index of window
right → ending index
freq[26] → frequency array for characters
sum → current substring sum
maxSum → maximum sum found

# Step 4: Remove Duplicate Characters

While expanding the window:

If a character already exists in the current window:
Remove characters from the left side
Update frequency and sum
This ensures all characters remain unique.

# Step 5: Calculate Character Sum

Each character value is calculated using:
value = character - 'a' + 1;
Example:
a = 1
b = 2
c = 3

# Step 6: Update Maximum Sum

After every valid window:

Compare current sum with maxSum
Store the maximum value
Example

Input:

abca

Valid cyclic substrings:

abc -> 6
bca -> 6
cab -> 6

Output:
6

# Time Complexity
O(N)
Reason:
Each character is added and removed from the sliding window at most once.
Space Complexity
O(1)

# Techniques Used

Sliding Window
Two Pointer Technique
Frequency Array
String Duplication for Cyclic Traversal

# Code:
https://github.com/Shub202/DSA-Assingnment-1-Cyclic-Sub-String.git

# Sample Inputs and there Outputs :

// *****Output********:

PS E:\Advance Coding 1> gcc main.c -o main
PS E:\Advance Coding 1> ./main 
Enter string: abca
Maximum Sum: 6
PS E:\Advance Coding 1> ./main
Enter string: Shivam
Invalid Input
PS E:\Advance Coding 1> 



# Shubham Kumar
# Linked In : https://www.linkedin.com/in/shubham-kumar-b21037295/

