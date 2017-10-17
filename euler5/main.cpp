/*
1 ~ 10 ������ � ���ε� ������ �������� ���� ���� ���� 2520�Դϴ�.

�׷��� 1 ~ 20 ������ � ���ε� ������ �������� ���� ���� ���� ���Դϱ�?
*/

#include <stdio.h>
#include <iostream>

using namespace std;

int Gcd(int a, int b); // �ִ� �����
int Lcm(int a, int b); // �ּ� �����

int main(void)
{
	int a = 1;

	for (int i = 2; i < 20; ++i)
	{
		a = Lcm(i, a);
	}

	cout << a << endl;
	
	return 0;
}

int Gcd(int a, int b)
{
	int max, min, temp;
	if (a > b)
	{
		max = a;
		min = b;
	}
	else
	{
		max = b;
		min = a;
	}

	while (max % min != 0)
	{
		temp = max;
		max = min;
		min = temp % min;
	}
	return min;
}

int Lcm(int a, int b)
{
	return a * b / Gcd(a, b);
}

/*
1. �Է����� �� �� m,n(m>n)�� ���´�. 
2. n�� 0�̶��, m�� ����ϰ� �˰����� �����Ѵ�. 
3. n�� m�� ������ ��������, n�� ����ϰ� �˰����� �����Ѵ�. 
4. �׷��� ������, m�� n�� ���� �������� ���Ӱ� m�� �����ϰ�, m�� n�� �ٲٰ� 3���� ���ƿ´�.
*/