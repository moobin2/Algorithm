/*
10���� ���� �ڿ��� �߿��� 3 �Ǵ� 5�� ����� 3, 5, 6, 9 �̰�, �̰��� ��� ���ϸ� 23�Դϴ�.

1000���� ���� �ڿ��� �߿��� 3 �Ǵ� 5�� ����� ��� ���ϸ� ���ϱ��?
*/

#include <stdio.h>
#include <iostream>

using namespace std;

int main(void)
{
	int sum = 0;

	for (int i = 0; i < 1000; i++)
	{
		if (i % 3 == 0)
		{
			sum += i;
		}
		else if (i % 5 == 0)
		{
			sum += i;
		}
	}

	cout << sum << endl;

	return 0;
}