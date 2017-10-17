/*
소수를 크기 순으로 나열하면 2, 3, 5, 7, 11, 13, ... 과 같이 됩니다.

이 때 10,001번째의 소수를 구하세요.
*/

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