## 32. Longest Valid Parentheses

>Given a string containing just the characters `'('` and `')'`, find the length of the longest valid (well-formed) parentheses substring.

>For `"(()"`, the longest valid parentheses substring is `"()"`, which has length = 2.

>Another example is `")()())"`, where the longest valid parentheses substring is `"()()"`, which has length = 4.

## **Solution 1** Two pass without a stack
use cnt as a stack 

## **Solution 2** Use a stack
stack top saves the index of the first character that cannot be matched

## **Solution 3** DP version 1
dp[i] is the longest valid parentheses end at position i
```
if (s[i]=='(') cnt ++;
else if (s[i]==')' and cnt>0) 
	that means we find a match, dp[i]=dp[i-1]+2
	if i-dp[i-1]-2 >0 dp[i]+=dp[i-dp[i-1]-2];
```

## **Solution 4** DP version 2
similar to Solution 3, dp[i] means the same thing

```
if (s[i]==')')
	if (s[i-1]=='(') dp[i] = dp[i-2]+2;
	else 
		if (s[i-1-dp[i-1]]=='(')
			dp[i] = dp[i-1]+2+dp[i-2-dp[i-1]]
		
```
```
      


