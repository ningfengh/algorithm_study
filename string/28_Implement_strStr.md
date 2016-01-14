## 28. Implement strStr()

>Implement strStr().

>Returns the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

### **Solution 1** Intuitive comparison

- Start from the first characters for both haystack and needle
- Compare the characters one by one
- Once the characters don't match, move the starting character of haystack one step to the right and compare from the beginning

The time complexity is O(n^2)

### **Solution 2** KMP algorithm

The advantage of the KMP algorithm is that the pointer for the haystack will never go back. The difficult part is to construct KMP table.

```
vector<int> T(s.size()+1,-1);
for (int i=1;i<=s.size();i++){
	int pos = T[i-1];
	while (pos!=-1&&s[pos]!=s[i-1])
		pos = T[pos];
	T[i] = pos + 1;
}
```
