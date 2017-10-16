#include <stdio.h>
#include <iostream>

using namespace std;

_Longlong Number = 2000000;
_Longlong PrimeSum(int MaxNumber);

int main(void)
{
	cout << PrimeSum(Number) << endl;

	return 0;
}

_Longlong PrimeSum(int MaxNumber)
{
	if (MaxNumber < 2) return 0;

	_Longlong sum = 2;

	bool* Prime = new bool[MaxNumber + 1];

	for (int i = 0; i < MaxNumber; ++i)
	{
		Prime[i] = true;
	}

	for (int i = 3; i < MaxNumber; i += 2)
	{
		if (Prime[i] == true)
		{
			sum += i;
			for (int k = i + i; k < MaxNumber; k += i)
			{
				Prime[k] = false;
			}
		}
		else
		{
			continue;
		}
	}

	return sum;

}