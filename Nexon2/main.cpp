/*
2. Ư�� ���ڿ� ����ϴ� ���α׷� �ۼ�
�����ڸ� �Է¹޾� ���ڿ��� bab�� 1��, baby�� -2������ ����Ѵ�.
�⺻������ 50���̸� babbab(�Ǵ� babab, �Ǵ� babybaby),�ϰ�� �� ���� ���Ǹ� babbaby�� ��� baby�� ����Ѵ�.
(bab�� baby�� �ϳ��� �ܾ�ó�� ���յ� ��� baby�� ó��)

��) bab is baby  => 50 + 1 - 2  => ��� : 49
babbab is baby  => 50 + 1 - 2  => ��� : 49
babbabbaby is babybababy  => 50 -2 - 2  => ��� : 46
*/

#include <iostream>

using namespace std;

int compareString(char* Str);

int main(void)
{
	int score = 50;
	char str[1024];
	char* context = NULL;

	cin.getline(str, 1024);

	///cout << str << endl;
	char* token = strtok_s(str, " ", &context);

	while (token)
	{
		//cout << token << endl;
		score += compareString(token);
		token = strtok_s(NULL, " ", &context);
	}

	cout << endl;
	cout << score << endl;

	return 0;
}

int compareString(char* Str)
{
	char compareStr[4];
	int len = strlen(Str);
	int point;
	
	for (int i = 0; i < len - 2; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			if (i + j > len)
			{
				compareStr[j] = 0;
			}
			else
			{
				compareStr[j] = Str[i + j];
			}
		}

		if (!strncmp(compareStr, "baby", 4))
		{
			return -2;
		}
		else if (!strncmp(compareStr, "bab", 3))
		{
			point = 1;
		}
	}
	return point;
}