#include <stdio.h>
#include <iostream>

using namespace std;

int main(void)
{
	int dot;
	int variable = 0;

	for (int i = 100; i < 1000; i++)
	{
		for (int k = 100; k < 1000; k++)
		{
			dot = i * k;

			if (dot < 100 * 100)
			{
				if (dot / 10000 == dot % 10 && (dot / 1000) % 10 == (dot / 10) % 10)
				{
					if (variable <= dot)
					{
						variable = dot;
					}
				}
				else
				{
					continue;
				}
			}
			else
			{
				if (dot / 100000 == dot % 10 && (dot / 10000) % 10 == (dot / 10) % 10 && (dot / 1000) % 10 == (dot / 100) % 10)		    
				{
					if (variable <= dot)
					{
						variable = dot;
					}
				}
				else
				{
					continue;
				}
			}
		}
	}

	cout << variable << endl;

	return 0;
}