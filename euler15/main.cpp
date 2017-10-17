/*
아래와 같은 2 × 2 격자의 왼쪽 위 모서리에서 출발하여 오른쪽 아래 모서리까지 도달하는 길은 모두 6가지가 있습니다 (거슬러 가지는 않기로 합니다).

그러면 20 × 20 격자에는 모두 몇 개의 경로가 있습니까?
*/

#include <iostream>

using namespace std;

int Size = 20;

int main(void)
{
	_Longlong route[21][21];

	for (int i = 0; i < Size + 1; ++i)
	{
		for (int j = 0; j < Size + 1; j++)
		{
			if (i == 0 || j == 0)
			{
				route[i][j] = 1;
			}
			else
			{
				route[i][j] = route[i - 1][j] + route[i][j - 1];
			}
		}
	}	

	cout << route[Size][Size] << endl;
	return 0;
}

