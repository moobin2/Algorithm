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

