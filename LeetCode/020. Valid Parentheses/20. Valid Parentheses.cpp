#include <iostream>
#include<string>
#include <stack>
using namespace std;

class Solution {
public:
	bool isValid(string s) {
		int i = 0;
		stack<char> Stack;
		while ('\0' != s[i]) {
			switch (s[i]) {
			case '(':  Stack.push('(');  break;

			case '{':  Stack.push('{');   break;

			case '[':   Stack.push('[');  break;

			case ')':   if (!Stack.empty()) {
				if ('(' == Stack.top())
					Stack.pop();
				else
					return false;
			}
						else    return false;

						break;

			case '}':   if (!Stack.empty()) {
				if ('{' == Stack.top())
					Stack.pop();
				else
					return false;
			}
						else   return false;

						break;

			case ']':  if (!Stack.empty()) {
				if ('[' == Stack.top())
					Stack.pop();
				else
					return false;
			}
					   else   return false;

					   break;
			default:   break;

			}//switch

			i++;

		}//while

		if (Stack.empty())
			return true;
		else     return false;//»Ù”“¿®∫≈∆•≈‰ÕÍ±œ ◊Û¿®∫≈ªπ”– £”‡ 
	}
		
};

int main() {
			Solution	s;
			string str = "[({}[])]";
			string output;
			s.isValid(str) ? output = "∆•≈‰’˝»∑" : output = "∆•≈‰¥ÌŒÛ";
			cout << output << endl;
			return 0;
}
