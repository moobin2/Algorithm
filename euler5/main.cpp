/*
1 ~ 10 사이의 어떤 수로도 나누어 떨어지는 가장 작은 수는 2520입니다.

그러면 1 ~ 20 사이의 어떤 수로도 나누어 떨어지는 가장 작은 수는 얼마입니까?
*/

#include <stdio.h>
#include <iostream>

using namespace std;

int Max = 20;

int main(void)
{
	//int count = 0;
	//int variable = 1000000000;
	//
	////for (int i = 2; i <= Max; i++)
	////{
	////	variable *= i;
	////}
	//
	//int min = variable;
	//
	//for (int i = variable; i >= Max; i = i - Max)
	//{
	//	for (int k = 1; k <= Max; ++k)
	//	{
	//		if (i % k == 0) count++;
	//	}
	//
	//	if (count == Max && min > i)
	//	{
	//		min = i;
	//	}
	//	count = 0;
	//}
	//
	//cout << min << endl;

	int a, b;
	a = 1;

	for (b = 1; b <= 20; b++)
	{
		if (a % b == 0)
			continue;
		else
		{
			a++;
			b = 1;
		}
	}
	printf("%d\n", a);
	return 0;

	return 0;
}

/*
1. 입력으로 두 수 m,n(m>n)이 들어온다. 
2. n가 0이라면, m를 출력하고 알고리즘을 종료한다. 
3. n가 m를 나누어 떨어지면, n을 출력하고 알고리즘을 종료한다. 
4. 그렇지 않으면, m를 n로 나눈 나머지를 새롭게 m에 대입하고, m과 n을 바꾸고 3으로 돌아온다.
*/