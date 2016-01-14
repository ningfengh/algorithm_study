/*

Implement strStr().

Returns the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

*/
#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
		int length1 = haystack.size();
		int length2 = needle.size();
		int pt1 = 0, pt2 = 0, left = 0;
		while (pt1<length1 && pt2<length2){
			if (haystack[pt1]!=needle[pt2]) {
				left++;
				pt1 = left;
				pt2 = 0;
			}
			else {
				pt1++;
				pt2++;
			}
		}
		return (pt2==length2)?left:-1;
	}
};


int main(void){
	string haystack = "abcdefg";
	string needle = "cde";
	Solution mysolution;
	cout<<mysolution.strStr(haystack,needle);
	return 1;
}