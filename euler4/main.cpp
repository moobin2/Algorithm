/*
앞에서부터 읽을 때나 뒤에서부터 읽을 때나 모양이 같은 수를 대칭수(palindrome)라고 부릅니다.

두 자리 수를 곱해 만들 수 있는 대칭수 중 가장 큰 수는 9009 (= 91 × 99) 입니다.

세 자리 수를 곱해 만들 수 있는 가장 큰 대칭수는 얼마입니까?
*/

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