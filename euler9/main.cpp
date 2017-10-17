/*

세 자연수 a, b, c 가 피타고라스 정리 a^2 + b^2 = c^2 를 만족하면 피타고라스 수라고 부릅니다 (여기서 a < b < c ).
예를 들면 32 + 42 = 9 + 16 = 25 = 52이므로 3, 4, 5는 피타고라스 수입니다.

a + b + c = 1000 인 피타고라스 수 a, b, c는 한 가지 뿐입니다. 이 때, a × b × c 는 얼마입니까?
*/

#include <stdio.h>
#include <iostream>

using namespace std;

int main(void)
{
	int a , b, c;

	for (a = 1; a < 1000; ++a)
	{
		for (b = 1; b <= a; b++)
		{
			int temp = (a * a + b * b);
			for (int i = 0; i < temp; ++i)
			{
				if (i * i == temp)
				{
					c = i;
					
					if (a + b + c == 1000)
					{
						cout << a * b * c << endl;
						return 0;
					}
				}
			}
		}
	}

	return 0;
}