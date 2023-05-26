#include <stdio.h>
#include <stdbool.h>

int reverse(int x)
{
	long long int reversed = 0; // for big value long long required
	int last_digit;
	while (x != 0)
	{
		last_digit = x % 10;
		reversed = (reversed * 10) + last_digit;
		x = x / 10;
	}
	return reversed;
}

bool isPalindrome(int x)
{
	if (x >= 0 &&  x == reverse(x))
		return true;
	return false;
}

int main()
{
	printf("%i\n", isPalindrome(1221));
	return 0;
}
