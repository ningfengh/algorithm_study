/*

Implement strStr().

Returns the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

*/
#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> strStr(string haystack, string needle) {
		vector<int> T(needle.size()+1,-1); // construct kmp table
		vector<int> result;
		for (int i=1; i<=needle.size(); i++){
			int pos = T[i-1];
			while (pos!=-1&&needle[pos]!=needle[i-1])
				pos = T[pos];
			T[i] = pos + 1;
		}
		int pt1 = 0, pt2 = 0;
		int length1 = haystack.size(), length2 = needle.size();
		while (pt1<length1){
			
			if (pt2 == -1){
				pt2 = 0;
				pt1++;
			}
			else if (haystack[pt1]==needle[pt2]){
				pt1++;
				pt2++;
			}
			else pt2 = T[pt2];
			
			if (pt2==needle.size()) {
				result.push_back(pt1-pt2);
			}
		}
		return result;
		
	}
};


int main(void){
	string haystack = "abcdefgdawcde";
	string needle = "cde";
	Solution mysolution;
	vector<int> result = mysolution.strStr(haystack,needle);
	for (auto a:result){
		cout<<a<<endl;
	}
	return 1;
}