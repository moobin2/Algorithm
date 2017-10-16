#include <stdio.h>
#include <iostream>

using namespace std;

int main(void)
{
	int a = 1;
	int count = 0;
	int count2 = 0;

	while ( count != 10001)
	{
		a++;
		count2 = 0;

		for (int i = a; i >= 1; --i)
		{
			if (a % i == 0) count2++;
		}

		if (count2 == 2)
		{
			count++;
		}
	}

	cout << a << endl;

	return 0;
}