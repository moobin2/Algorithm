/*
1. ���ĺ��� �Է¹޾� ����ϴ� ���α׷� �ۼ�
a�� 1 �̶��ϰ� z�� 26 �Դϴ�. ��, ��ҹ��� ��� �ν��ؾ� �մϴ�.

��) abcd�� �Է� ������ ����� 10 �Դϴ�.
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
		if (str[i] < 'a')	// �빮���̸�
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