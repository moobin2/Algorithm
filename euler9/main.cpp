/*

�� �ڿ��� a, b, c �� ��Ÿ��� ���� a^2 + b^2 = c^2 �� �����ϸ� ��Ÿ��� ����� �θ��ϴ� (���⼭ a < b < c ).
���� ��� 32 + 42 = 9 + 16 = 25 = 52�̹Ƿ� 3, 4, 5�� ��Ÿ��� ���Դϴ�.

a + b + c = 1000 �� ��Ÿ��� �� a, b, c�� �� ���� ���Դϴ�. �� ��, a �� b �� c �� ���Դϱ�?
*/

#include <stdio.h>
#include <iostream>

using namespace std;

int main(void)
{
	int a , b, c;

	for (a = 1; a < 1000; ++a)
	{
		for (b = 1; b <= a; b++)
		{
			int temp = (a * a + b * b);
			for (int i = 0; i < temp; ++i)
			{
				if (i * i == temp)
				{
					c = i;
					
					if (a + b + c == 1000)
					{
						cout << a * b * c << endl;
						return 0;
					}
				}
			}
		}
	}

	return 0;
}