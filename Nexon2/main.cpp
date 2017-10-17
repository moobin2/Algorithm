/*
2. 특정 문자열 계산하는 프로그램 작성
영문자를 입력받아 문자열중 bab은 1점, baby는 -2점으로 계산한다.
기본점수는 50점이며 babbab(또는 babab, 또는 babybaby),일경우 한 번만 계산되며 babbaby일 경우 baby만 계산한다.
(bab과 baby가 하나의 단어처럼 조합된 경우 baby만 처리)

예) bab is baby  => 50 + 1 - 2  => 결과 : 49
babbab is baby  => 50 + 1 - 2  => 결과 : 49
babbabbaby is babybababy  => 50 -2 - 2  => 결과 : 46
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