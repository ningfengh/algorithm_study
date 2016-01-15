# Important notes

#### 1. compare using `.size()`
It is not a good practice to do comparison directly with the `.size()` of an object. `.size()` has a type of `size_t` or `unsigned int`. If a negative signed int is compared to it, thing will go wrong. 

For example, (-1<s.size()) == false if s.size()==1.

#### 2. Fork 
a?b:c has a very low priority 
`dp[i] = dp[i-1]+2+((idx>0)?dp[idx-1]:0)` is correct 
`dp[i] = dp[i-1]+2+(idx>0)?dp[idx-1]:0` will not give the current result, is same as the following
`dp[i] = (dp[i-1]+2+(idx>0))?dp[idx-1]:0`

