/*
���� ���� n�� ���Ͽ�, ������ ���� ��� ������ �ݺ��ϱ�� �մϴ�.

n �� n / 2 (n�� ¦���� ��)
n �� 3 n + 1 (n�� Ȧ���� ��)

13�� ���Ͽ� ���� ��Ģ�� �����غ��� �Ʒ�ó�� 10���� ������ ���� 1�� �˴ϴ�.

13 �� 40 �� 20 �� 10 �� 5 �� 16 �� 8 �� 4 �� 2 �� 1
���� ������ ���� �ʾ�����, �̷� ������ ��ġ�� � ���� �����ص� ���������� 1�� �������� �����˴ϴ�.
(����: �̰��� �ݶ��� ���� Collatz Conjecture�̶�� �ϸ�, �̷� ������ ��ڼ� hailstone sequence�� �θ��⵵ �մϴ�)

�׷���, �鸸(1,000,000) ������ ���� �������� �� 1���� �����ϴµ� ���� �� ������ ��ġ�� ���ڴ� ���Դϱ�?

����: ��� ���� ���߿��� ���ڰ� �鸸�� �Ѿ�� �������ϴ�.
*/

#include <iostream>

using namespace std;

int main(void)
{
	int value = 1;
	int cnt = 0;
	int maxValue = value;
	int maxCnt = 0;

	while (value <= 1000000)
	{
		cnt = 0;
		_Longlong tempValue = value;
		
		while (tempValue != 1)
		{
			if (tempValue % 2 == 0)
			{
				tempValue /= 2;
				cnt++;
			}
			else
			{
				tempValue = tempValue * 3 + 1;
				cnt++;
			}
		}

		if (cnt > maxCnt)
		{
			maxCnt = cnt;
			maxValue = value;
		}

		value++;
	}

	cout << "Cnt : "<< maxCnt << " , Value : " << maxValue << endl;
 
	return 0;
}

