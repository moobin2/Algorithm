#include <stdio.h>
#include <iostream>

using namespace std;

int main(void)
{
	int sum = 0;
	int fibonacci1 = 1;
	int fibonacci2 = 2;

	while (fibonacci2 < 4000000)
	{
		if (fibonacci2 % 2 == 0)
		{
			sum += fibonacci2;
		}

		int temp = fibonacci1;
		fibonacci1 = fibonacci2;
		fibonacci2 = fibonacci1 + temp;
	}

	cout << sum << endl;

	return 0;
}