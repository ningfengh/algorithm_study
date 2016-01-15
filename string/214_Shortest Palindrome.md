## 214. Shortest Palindrome

>Given a string S, you are allowed to convert it to a palindrome by adding characters in front of it. Find and return the shortest palindrome you can find by performing this transformation.

>For example:

>Given `"aacecaaa"`, return `"aaacecaaa"`.

>Given `"abcd"`, return `"dcbabcd"`.

### **Solution 1** Naive two pointers

Time Limit Exceeded

The right pointer need to move back if the characters are not match

### **Solution 2** KMP concept

The right pointer only goes to left

1. head_pointer = 0, tail_pointer = s.size()-1
2. compare the characters one by one
3. if not match move head_pointer according to KMP table
4. until head_point and tail_pointer match

  