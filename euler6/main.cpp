#include <stdio.h>
#include <iostream>

using namespace std;

int MAX = 100;

int main(void)
{
	int sum = 0;
	int dot = 0;

	for (int i = 1; i <= MAX; i++)
	{
		sum += i;
	}
	sum *= sum;

	for (int i = 1; i <= MAX; i++)
	{
		dot += (i * i);
	}

	cout << sum - dot << endl;

	return 0;
}