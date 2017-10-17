/*
1���� n������ �ڿ����� ���ʷ� ���Ͽ� ������ ���� �ﰢ����� �մϴ�.
���� ��� 7��° �ﰢ���� 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28�� �˴ϴ�.
�̷� ������ �ﰢ���� ���� ������ ������ �����ϴ�.

1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ...
�� �ﰢ������ ����� ���غ��ô�.

1: 1
3: 1, 3
6: 1, 2, 3, 6
10: 1, 2, 5, 10
15: 1, 3, 5, 15
21: 1, 3, 7, 21
28: 1, 2, 4, 7, 14, 28
������ ������, 5�� �̻��� ����� ���� ù��° �ﰢ���� 28�Դϴ�.

�׷��� 500�� �̻��� ����� ���� ���� ���� �ﰢ���� ���Դϱ�?
*/

#include <stdio.h>
#include <iostream>

using namespace std;

int DivisorCount(int Value);

int main(void)
{
	int value = 0;

	for (int i = 1; ; ++i)
	{
		value += i;
		if (DivisorCount(value) >= 500) 
			break;
	}
	
	cout << value << endl;

	return 0;
}


int DivisorCount(int Value)
{
	int count = 0;
	
	for (int i = 1; i * i <= Value; ++i)
	{
		if (Value % i == 0)
		{
			count++;
			if (i * i < Value)
				count++;
		}
	}

	return count;
}