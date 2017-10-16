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