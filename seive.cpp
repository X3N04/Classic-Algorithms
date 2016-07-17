const int MAX = 1000000;
#include<iostream>
#include<fstream>
int main()
{
	std::ofstream out("out.txt");
	if(!out.is_open())
	{
		std::cout << "File open failure.";
		return -1;
	}
	bool a[MAX];
	for(int x = 0; x < MAX; x++)
	{
		a[x] = true;
	}
	a[0] = a[1] = false;
	for(int n = 2; n <= MAX / 2; n++)
		if(a[n] == true)
			for(int m = n+n; m < MAX; m+=n)
				a[m] = false;
	int n = 1;
	for(int i = 0; i < MAX; i++)
	{
		if (a[i])
		{
			out << i << " ";
			if( (n++ % 11) == 0) out << std::endl;
		}
		
	}
	return 0;
}

