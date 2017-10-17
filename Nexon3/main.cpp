/*
3. 팀구성하기 프로그램 작성
서로 싫어하지 않는 선수로 2팀을 구성한다.

1. 전체 선수 인원 입력
2. 싫어하는 선수가 있는 선수는 싫어하는 선수수와 선수 번호를 차례대로 입력한다.
3. 선수는 최대 100명까지 가능하다.

예)
     (입력)
     5           => 설명 : 총 선수수
     1 1 2       => 설명 : 1번선수는 1명을 싫어하고 싫어하는 선수는 2번이다.
     2 1 3       => 설명 : 2번선수는 1명을 싫어하고 싫어하는 선수는 3번이다.
     3 0 0       => 설명 : 3번선수는 싫어하는 선수가 없다.
     4 2 2 3     => 설명 : 4번선수는 2명을 싫어하고 싫어하는 선수는 2,3번이다.
     5 1 4       => 설명 : 5번선수는 1명을 싫어하고 싫어하는 선수는 4번이다.
     
     위와 같이 입력(설명은 단지 입력에 대한 설명이고 숫자만을 입력한다)하면 결과는
     
     A팀 : 1,5
	 B팀 : 2
*/

#include <iostream>
#include <map>
#include <vector>

using namespace std;

void InputCommand(map<int, vector<int>> Order, char* Command);

int main(void)
{
	int peopleCnt = 1;
	char command[512];
	map<int, vector<int>> order;

	cout << "플레이어 명 : ";
	cin >> peopleCnt;
	cin.ignore();								// cin 뒤에 getline 개행문자 만나면 안끝나게 ignore한번 해준다.
	cout << endl<< "명령어 입력" << endl;
	for (int i = 0; i < peopleCnt; ++i)
	{
		cin.getline(command, 512);
		InputCommand(order, command);			// 명령어 맵에 저장
	}

	int a = 0;
	return 0;
}

void InputCommand(map<int, vector<int>> Order, char* Command)
{
	char* context = NULL;
	char* token = NULL;
	
	token = strtok_s(Command, " ", &context);

	int playerNumber = token[0] - 48;

	while (token)
	{
		token = strtok_s(NULL, " ", &context);
		
		if(token != NULL)
			Order[playerNumber].push_back(token[0] - 48);
	}
}