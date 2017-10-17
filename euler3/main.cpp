/*
어떤 수를 소수의 곱으로만 나타내는 것을 소인수분해라 하고, 이 소수들을 그 수의 소인수라고 합니다.
예를 들면 13195의 소인수는 5, 7, 13, 29 입니다.

600851475143의 소인수 중에서 가장 큰 수를 구하세요.
*/

#include <stdio.h>
#include <iostream>

using namespace std;

int main(void)
{
	_Longlong variable = 600851475143;
	int k = 2;
	int maxk = k;

	while (variable != 1)
	{
		if (variable % k == 0)
		{
			variable = variable / k;
			if (maxk <= k)
			{
				maxk = k;
			}
			k = 2;
		}
		else
		{
			k++;
		}
		int a = 0;
	}

	cout << maxk << endl;

	return 0;
}