#include<iostream>
using namespace std;

int main()
{
	int num;
	cout << "Enter a number: ";
	cin >> num;

	while (num != 1)
	{
		if (num % 2 == 0)
			num /= 2;
		else
			num = num * 3 + 1;
		cout << "total = " << num << endl;
	}
	system("pause");
	return 0;
}