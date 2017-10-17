/*
피보나치 수열의 각 항은 바로 앞의 항 두 개를 더한 것이 됩니다. 1과 2로 시작하는 경우 이 수열은 아래와 같습니다.

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
짝수이면서 4백만 이하인 모든 항을 더하면 얼마가 됩니까?
*/

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