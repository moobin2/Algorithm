/*
3. �������ϱ� ���α׷� �ۼ�
���� �Ⱦ����� �ʴ� ������ 2���� �����Ѵ�.

1. ��ü ���� �ο� �Է�
2. �Ⱦ��ϴ� ������ �ִ� ������ �Ⱦ��ϴ� �������� ���� ��ȣ�� ���ʴ�� �Է��Ѵ�.
3. ������ �ִ� 100����� �����ϴ�.

��)
     (�Է�)
     5           => ���� : �� ������
     1 1 2       => ���� : 1�������� 1���� �Ⱦ��ϰ� �Ⱦ��ϴ� ������ 2���̴�.
     2 1 3       => ���� : 2�������� 1���� �Ⱦ��ϰ� �Ⱦ��ϴ� ������ 3���̴�.
     3 0 0       => ���� : 3�������� �Ⱦ��ϴ� ������ ����.
     4 2 2 3     => ���� : 4�������� 2���� �Ⱦ��ϰ� �Ⱦ��ϴ� ������ 2,3���̴�.
     5 1 4       => ���� : 5�������� 1���� �Ⱦ��ϰ� �Ⱦ��ϴ� ������ 4���̴�.
     
     ���� ���� �Է�(������ ���� �Է¿� ���� �����̰� ���ڸ��� �Է��Ѵ�)�ϸ� �����
     
     A�� : 1,5
	 B�� : 2
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

	cout << "�÷��̾� �� : ";
	cin >> peopleCnt;
	cin.ignore();								// cin �ڿ� getline ���๮�� ������ �ȳ����� ignore�ѹ� ���ش�.
	cout << endl<< "��ɾ� �Է�" << endl;
	for (int i = 0; i < peopleCnt; ++i)
	{
		cin.getline(command, 512);
		InputCommand(order, command);			// ��ɾ� �ʿ� ����
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