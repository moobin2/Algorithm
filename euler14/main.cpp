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

