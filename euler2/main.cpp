/*
�Ǻ���ġ ������ �� ���� �ٷ� ���� �� �� ���� ���� ���� �˴ϴ�. 1�� 2�� �����ϴ� ��� �� ������ �Ʒ��� �����ϴ�.

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
¦���̸鼭 4�鸸 ������ ��� ���� ���ϸ� �󸶰� �˴ϱ�?
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