/*
1 ~ 10 ������ � ���ε� ������ �������� ���� ���� ���� 2520�Դϴ�.

�׷��� 1 ~ 20 ������ � ���ε� ������ �������� ���� ���� ���� ���Դϱ�?
*/

#include <stdio.h>
#include <iostream>

using namespace std;

int Max = 20;

int main(void)
{
	//int count = 0;
	//int variable = 1000000000;
	//
	////for (int i = 2; i <= Max; i++)
	////{
	////	variable *= i;
	////}
	//
	//int min = variable;
	//
	//for (int i = variable; i >= Max; i = i - Max)
	//{
	//	for (int k = 1; k <= Max; ++k)
	//	{
	//		if (i % k == 0) count++;
	//	}
	//
	//	if (count == Max && min > i)
	//	{
	//		min = i;
	//	}
	//	count = 0;
	//}
	//
	//cout << min << endl;

	int a, b;
	a = 1;

	for (b = 1; b <= 20; b++)
	{
		if (a % b == 0)
			continue;
		else
		{
			a++;
			b = 1;
		}
	}
	printf("%d\n", a);
	return 0;

	return 0;
}

/*
1. �Է����� �� �� m,n(m>n)�� ���´�. 
2. n�� 0�̶��, m�� ����ϰ� �˰����� �����Ѵ�. 
3. n�� m�� ������ ��������, n�� ����ϰ� �˰����� �����Ѵ�. 
4. �׷��� ������, m�� n�� ���� �������� ���Ӱ� m�� �����ϰ�, m�� n�� �ٲٰ� 3���� ���ƿ´�.
*/