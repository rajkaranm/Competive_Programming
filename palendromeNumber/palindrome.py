def reverse_int(x):
	reversed_num = 0
	lastdigit = 0
	while (x != 0):
		lastdigit = x % 10
		reversed_num = (reversed_num * 10) + lastdigit
		x = x // 10 # / return float but // returns int
	return reversed_num

def isPalindrome(x):
	if (x >= 0 and x == reverse_int(x)):
		return True
	return False

print(isPalindrome(1221))