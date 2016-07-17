#include<iostream>
#include<stack>
int main()
{
	unsigned long long num, MIN = 1000000;
	int sum = 0, digit;
	std::stack<int> rev;
	MIN *= MIN * 1000;
	std::cout << "Enter a 16-digit credit card number:" << std::flush;
	std::cin >> num;
	if (num < MIN)
	{
		std::cout << "Invalid credit card number";
		return -1;
	}
	while (num)
	{
		digit = num % 10;
		rev.push(digit);
		num /= 10;
	}
	for (int i = 1; i <= 16; ++i)
	{
		digit = rev.top();
		rev.pop();
		if (i % 2 == 0)
			sum += digit;
		else
		{
			digit *= 2;
			int fract = digit % 10;
			digit = digit / 10;
			sum += (digit + fract);
		}
	}
	if (sum % 10 == 0) std::cout << "Valid credit card number" << std::endl;
	else std::cout << "Invalid credit card number" << std::endl;
	return 0;
}

