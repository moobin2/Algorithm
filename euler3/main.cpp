/*
� ���� �Ҽ��� �����θ� ��Ÿ���� ���� ���μ����ض� �ϰ�, �� �Ҽ����� �� ���� ���μ���� �մϴ�.
���� ��� 13195�� ���μ��� 5, 7, 13, 29 �Դϴ�.

600851475143�� ���μ� �߿��� ���� ū ���� ���ϼ���.
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