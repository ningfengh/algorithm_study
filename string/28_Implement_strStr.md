## 28. Implement strStr()

>Implement strStr().

>Returns the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

### *Solution 1* Intuitive comparison

1. Start from the first characters for both haystack and needle
2. Compare the characters one by one
3. Once the characters don't match, move the starting character of haystack one step to the right and compare from the beginning

The time complexity is O(n^2)