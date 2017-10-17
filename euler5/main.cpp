/*
1 ~ 10 사이의 어떤 수로도 나누어 떨어지는 가장 작은 수는 2520입니다.

그러면 1 ~ 20 사이의 어떤 수로도 나누어 떨어지는 가장 작은 수는 얼마입니까?
*/

#include <stdio.h>
#include <iostream>

using namespace std;

int Gcd(int a, int b); // 최대 공약수
int Lcm(int a, int b); // 최소 공배수

int main(void)
{
	int a = 1;

	for (int i = 2; i < 20; ++i)
	{
		a = Lcm(i, a);
	}

	cout << a << endl;
	
	return 0;
}

int Gcd(int a, int b)
{
	int max, min, temp;
	if (a > b)
	{
		max = a;
		min = b;
	}
	else
	{
		max = b;
		min = a;
	}

	while (max % min != 0)
	{
		temp = max;
		max = min;
		min = temp % min;
	}
	return min;
}

int Lcm(int a, int b)
{
	return a * b / Gcd(a, b);
}

/*
1. 입력으로 두 수 m,n(m>n)이 들어온다. 
2. n가 0이라면, m를 출력하고 알고리즘을 종료한다. 
3. n가 m를 나누어 떨어지면, n을 출력하고 알고리즘을 종료한다. 
4. 그렇지 않으면, m를 n로 나눈 나머지를 새롭게 m에 대입하고, m과 n을 바꾸고 3으로 돌아온다.
*/