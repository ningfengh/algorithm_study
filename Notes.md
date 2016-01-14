# Important notes

#### 1. compare using `.size()`
It is not a good practice to do comparison directly with the `.size()` of an object. `.size()` has a type of `size_t` or `unsigned int`. If a negative signed int is compared to it, thing will go wrong. 

For example, (-1<s.size()) == false if s.size()==1.
