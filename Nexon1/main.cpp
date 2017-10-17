/*
1. 알파벳을 입력받아 계산하는 프로그램 작성
a는 1 이라하고 z는 26 입니다. 단, 대소문자 모두 인식해야 합니다.

예) abcd를 입력 받으면 결과는 10 입니다.
*/

// a = 97	A = 65
// z = 122	Z = 90
#include <iostream>

using namespace std;

int main(void)
{
	char str[1024];
	int len;
	int sum = 0;

	cin >> str;

	len = strlen(str);

	for (int i = 0; i < len; ++i)
	{
		if (str[i] < 'a')	// 대문자이면
		{
			sum += str[i] - 'A' + 1;
		}
		else
		{
			sum += str[i] - 'a' + 1;
		}
	}

	cout << sum << endl;

	return 0;
}