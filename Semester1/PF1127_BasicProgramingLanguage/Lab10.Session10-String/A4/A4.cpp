#include <iostream>
using namespace std;

bool isPalindrome(string str)
{
	string filtered = "";

	for (char c : str)
	{
		if (isalnum(c))
		{
			filtered += tolower(c);
		}
	}

	int left = 0, right = filtered.size() - 1;
	while (left < right)
	{
		if (filtered[left] != filtered[right])
		{
			return false;
		}
		left++;
		right--;
	}
	return true;
}

int main()
{
	string s;
	cout << "Enter a string: ";
	getline(cin, s);

	if (isPalindrome(s))
	{
		cout << "==> String is Palindrome" << endl;
	}
	else
	{
		cout << "==> String is not Palindrome" << endl;
	}

	return 0;
}